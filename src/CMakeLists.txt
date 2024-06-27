set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(syntax_parse syntform.c syntax_parser.c synttok.c mymalloc.c libhash.c)
#target_compile_definitions(syntax_parse PRIVATE DYYERROR_VERBOSE)

include(CheckIncludeFile)
CHECK_INCLUDE_FILE("dirent.h" HAVE_DIRENT_H)
if(HAVE_DIRENT_H)
  target_compile_definitions(syntax_parse PRIVATE HAVE_DIRENT_H=1)
endif()

# syntax_parse desc
add_custom_command(
  COMMENT "running syntax_parse ..."
  COMMAND syntax_parse ${CMAKE_CURRENT_SOURCE_DIR}/desc
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  OUTPUT attr_lookup attr_enum.h group_lookup group_enum.h syntax_decls.c syntax_decls.h
  DEPENDS desc/syntax.cmos.desc desc/syntax.fpga.desc
)

# gperf -L ANSI-C -t -H group_hash_func -N lookup_group_name -C -I -k 1-255 -D group_lookup --output-file=group_lookup.c
add_custom_command(
  COMMENT "gperf generating group_lookup.c"
  COMMAND gperf -L ANSI-C -t -H group_hash_func -N lookup_group_name -C -I -k 1-255 -D group_lookup --output-file=group_lookup.c
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  OUTPUT group_lookup.c
  DEPENDS group_lookup
)

# gperf -L ANSI-C -t -H attr_hash_func -N lookup_attr_name -C -I -k 1-255 -D attr_lookup --output-file=attr_lookup.c
add_custom_command(
  COMMENT "gperf generating attr_lookup.c"
  COMMAND gperf -L ANSI-C -t -H attr_hash_func -N lookup_attr_name -C -I -k 1-255 -D attr_lookup --output-file=attr_lookup.c
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  OUTPUT attr_lookup.c
  DEPENDS attr_lookup
)

# syntax_parse generated:
# attr_enum.h
# attr_lookup
# group_enum.h
# group_lookup
# syntax_decls.c
# syntax_decls.h

# gperf -L ANSI-C -t -H group_hash_func -N lookup_group_name -C -I -k \* -D group_lookup --output-file=group_lookup.c
# gperf -L ANSI-C -t -H attr_hash_func -N lookup_attr_name -C -I -k \* -D attr_lookup --output-file=attr_lookup.c

# flex synttok.l
# bison syntax_parser.y -p syntax_parser_ -o syntax_parser.c -H
# flex token.l
# bison liberty_parser.y -p liberty_parser_ -o liberty_parser.c -H

add_library(si2dr_liberty STATIC
  PI.c token.c mymalloc.c libhash.c libstrtab.c
  liberty_parser.c liberty_front_lex.c syntax_checks.c 
  syntax_decls.c group_lookup.c attr_lookup.c
)

set_target_properties(si2dr_liberty PROPERTIES POSITION_INDEPENDENT_CODE TRUE) # -fPIC

add_executable(liberty_parser main.c)
target_link_libraries(liberty_parser PRIVATE si2dr_liberty)
target_compile_definitions(liberty_parser PRIVATE VERSION="2.5")