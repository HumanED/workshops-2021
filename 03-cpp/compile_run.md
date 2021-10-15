
## The `main` function
Before you can compile anything you need a program written in C, any wuch program haw a file with a `main` function/
This is the entry point of program, this is the thing that gets called when a program is started.
The `main` function if it takes any arguments it must take 2, the first of which is an integer (usually named `argc`) which is the number of command line arguments.
The second argument is more complicated but essentially it's the list of command line arguments (it's a pointer to char pointers).
Finally, the main function returns an integer, this is used as an error code.
For example a 0 means the program has finished succefully.

## Compilation
There are 2 main compilers GCC and Clang, GCC should be preinstalled on all unix based OSs, so we'll use that for now.

To compile a simple program which only has one file which contains a main function, you open a terminal in the folder where the file is and  run `g++ file.cpp`.
This will compile the file and output the runnable program as `a.out`, this can then be run (in the terminal) by `./a.out`.

GCC also has a bunch of command line options, the first of which is `-o`, this specifies the name of the output file (instead of `a.out`)
So if you run `g++ file.cpp -o file` then it outputs a file named `file` (and you can run it using `./file`).

## Multiple files
This gets a bit more complicated, say you have your `file1.cpp` which contains the main function and you want tu use a function `func1` defined in `file2.cpp`, how do you do that?
The simplest (but not very good) would be to add `#include "file.cpp"` at the top of `file1.cpp`.
This runs into several issues which aren't covered because it gets complicated fast, but what `#include` does is that is takes all contents of `file2.cpp` and pastes them into `file1.cpp`.

The right way to do this is using a header file (with a `.hpp` suffix), which (if the `func1` function returns an integer and takes no arguments) would look as follows:
```hpp
int func1();
```
Then in `file1.cpp` you include the header file instead, again this does nothing more than copy-paste the contents of the header file so you could write it in the file manually (though again, not good practise).
The header file can be viewed as an index of a given file, it documents all the functions and values (including their types) that should be available outside the file.

However if you now try to compile `file1.cpp` there will be an error about an undefined reference.
The problem now is that the compiler know the type of the function but not its actual contents.
The first way to compile the program is to run `g++ file2.cpp file1.cpp`, then the compiler will find the main function from the two files and compile both files.

However, there is a better way to do this as this way you would always need to compile all the source code used in a program.
This means that if you used a library the whole library would need to be recompiled everytime.

There is a better way to do things, to understand it it should be noted that the compiler does its job in 2 main parts, compiling and linking.
During compiling all the C++ source code files are translated into object files (suffix `.o`) which contain most of the information from the source code in a more computer-readable way.
Then during linking the compiler takes the main function and finds all the called functions in the object files and bundles it all together (it's a complicated process) into one executable file.

So, to get to the point we can first only compile `file2.cpp` into an object file and then compile `file1.cpp` while linking with the object file `file2.o`.
To do this we first call `g++ -c file2.cpp` (the `-c` option tells gcc not to do the linking) which will create `file2.o` and then call `g++ file2.o file1.cpp`
This compiles `file1.cpp` and links it with `file2.o`.
You could also first compile both files into object files with the `-c` option and then link the two object files together with `g++ file1.o file2.o`, when you run `g++`, it treats `.cpp` and `.o` files given ar arguments in a very similar manner.

As a final note, when you have a source code file using a header that is in a different directory, you can compile the source file using the `-I` option, you would list the (possibly multiple) directories containing all relevant header files after it like `-I/my/header/files/ /and/some/more`.

However, by now the commands are already pretty long so I should note that in practise manual compilation isn't really done, if you need anything more complicated you will need a build tool, the usual choice being make files or CMake files.
However knowing how the source code is compiled might give you some useful insights into how those build tools work.
