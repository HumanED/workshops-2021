
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
