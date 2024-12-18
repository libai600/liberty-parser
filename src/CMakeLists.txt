set(CMAKE_INCLUDE_CURRENT_DIR ON)

# flex synttok.l
# bison syntax_parser.y -p syntax_parser_ -o syntax_parser.c -H

add_executable(syntax_parse syntform.c syntax_parser.c synttok.c mymalloc.c libhash.c)
target_compile_definitions(syntax_parse PRIVATE HAVE_DIRENT_H)
if(MSVC)
  target_include_directories(syntax_parse PRIVATE win BEFORE)
endif()

# syntax_parse generated:
# attr_enum.h
# attr_lookup
# group_enum.h
# group_lookup
# syntax_decls.c
# syntax_decls.h

# gperf -L ANSI-C -t -H group_hash_func -N lookup_group_name -C -I -k 1-255 -D group_lookup --output-file=group_lookup.c
# gperf -L ANSI-C -t -H attr_hash_func -N lookup_attr_name -C -I -k 1-255 -D attr_lookup --output-file=attr_lookup.c


# flex token.l
# bison liberty_parser.y -p liberty_parser_ -o liberty_parser.c -H

add_library(si2dr_liberty STATIC
  PI.c token.c mymalloc.c libhash.c libstrtab.c
  liberty_parser.c liberty_front_lex.c syntax_checks.c 
  syntax_decls.c group_lookup.c attr_lookup.c
)

set_target_properties(si2dr_liberty PROPERTIES POSITION_INDEPENDENT_CODE TRUE) # -fPIC
if(MSVC)
  target_include_directories(si2dr_liberty PRIVATE win BEFORE)
endif()

add_executable(liberty_parse main.c)
target_link_libraries(liberty_parse PRIVATE si2dr_liberty)
target_compile_definitions(liberty_parse PRIVATE VERSION="2.5")
