# How to split a c++ Class in another file

## how to split
We need three parts:
- main class: is the main.cpp
- class header: is the class.h; this contains only the declaration
of the class
- class file: is the class.cpp; this contains the definition of
the constructor and methods/procedures

## how to include 

Including using ” “: When using the double quotes(” “), 
the preprocessor access the current directory in which the source 
“header_file” is located. This type is mainly used to access any 
header files of the user’s program or user-defined files.
'''
#include "user-defined_file"
'''

Including using <>: While importing file using angular brackets(<>)
the preprocessor uses a predetermined directory path to access 
the file. It is mainly used to access system header files located 
in the standard system directories.
'''
#include <header_file>
'''

## how to compile/run
Also we need to use thoose commands to link the class file whith
out "main" program
'''
// we compile and naming the output file "class.o"
g++ -c class.cpp -o class.o
// We can also use, without naming, the default is "name_file.o"
g++ -c class.cpp 
// we do the same for the "main" file
g++ -c main.cpp -o main.o
// Last step is to link the compiled files
g++ class.o main.o -o main
// then only runs the main file, we named "main"
./main
'''

## u can also try this...
'''
// compile both and link
g++ class.cpp main.cpp 
// then only runs the main file
./a
'''

