# Liberty Parser

A Liberty library parser.

This project is a fork of the original *Synopsys / Si2 Liberty Parser*

## Major Changes

- Fixed some compile problems.
- Add CMakeLists.txt to make it work with CMake build system.
- Add some win32 api files (from [dirent](https://github.com/tronkko/dirent) and [win32ports](https://github.com/win32ports)) to make it support Windows MSVC. 

### Note

The following files are generated during the original makefile build process, but I put them in the source directory, and the CMake build process doesn't generate them :

- syntform.c
- syntax_parser.h
- syntax_parser.c
- syntax_decls.h
- syntax_decls.c
- group_lookup
- group_enum.h
- attr_lookup
- attr_enum.h
- group_lookup.c
- attr_lookup.c
- token.c
- liberty_parser.c
- liberty_parser.h

If you don't change the syntax description files in the `desc` directory, normally you don't need to regenerate these files. But if you change the syntax description files, you need to regenerate them. 
