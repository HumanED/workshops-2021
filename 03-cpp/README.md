# C++ Workshop
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

## Basic Syntax
In C++, the semicolon (;) is a statement terminator. That is, each individual statement must be ended with a semicolon. It indicates the end of one logical entity.
### 1 Variables
C++ is a typed language, which means that when you creat a variable you must indicate the type of the variable (and that type can't change).
Creating a variable in C++ requires two steps:
1. Declaration
2. Assingment 

To create a variable that holds the integer 5 we do it like this:
```cpp
int y;
y = 10;

```
The first line involves Declaring the variable and the second one assinging it its value, the two steps can be done in one line:
```cpp
int y = 10;

```
### 2 Functions
As C+ is a typed language in the definition of each function we will have to specify what are the types of its arguments and the type of the return value (if any), if there is no return value instead of the type you write the keyword void.
An example of a function in c++ would be like this:
```cpp
int my_function(int x, int y){
    return x + y;
}

```
This function takes two integer values and returns another integer that is the sum of those values, note that in cpp the body of the function is wrapped by curly braces {}
A more general example of a function would be:
```cpp
return_type name_of_the_function(type_of_argument name_of_argument,...){
    body_of_the_function
    return something (if anything to return);
}
```
### 3 Primitive Data Types
In this section we will present the most used Primitive Data types:
| Type      | Keyword |
| :-----------: | :-----------: |
| Boolean      | bool       |
| Character   | char        |
| Integer   | int        |
|Floating point 	 | float |
|Double floating point |	double |
|Valueless 	| void |
### 4 Comments
In cpp there are several ways of writting comments:
```cpp
/* This is a comment */

/* C++ comments can also
   * span multiple lines
*/
```
### 5 Conditional Statements
Conditional Statements in C++ are similar to the ones we have seen in python:
```cpp
if(condition){
    code_here;
}
else{
    code_here_too;
}
```
If condition is met then code_here will be executed (and code_here_too not) and if the condition is not met then code_here_too (and not code_here) will be executed.
Nested conditionals are made with the ```else if``` 
```cpp
if (condition){
    code_here;
}
else if (condition_two){
    code_here_too;
}
else {
    code_else
}
```
Then code here too will only evaluate if condition one is not met and confition two is met. Code else will only be evaluated if non of the two conditions are true. You should willbe able the nestes conditionals from:
```cpp
if (condition){
    code_here;
}
if (condition_two){
    code_here_too;
}
```
In this case each if statement is indepenent of the other, meaning that if condition one and two can be both true then both code_here and code_here_two will be executed.

### 6 Loops
In this case we only care about while loops and for loops (the same as in python):
```cpp
// for loop execution
   for( int a = 10; a < 20; a = a + 1 ) {
      cout << "value of a: " << a << endl;
   }
```
The for loop declaration needs three steps:
1. Declaration of the variables used
2. condition 
3. how the declared variables in 1 change in each iteration of the loop
```cpp
// for loop execution
   for( variable declaration; condition; evolve condition ) {
      code_here;
   }
```
Then code_here will be repeated until the condition is not met.
The while loop looks very similar in cpp. However, in this case you only need to specify the condition at the beginning of the loop.
```cpp
while(condition){
    statements;
}
```
Another way of getting out of a loop is by including a break statement.
```cpp
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
} 
```
In this case the output will be 
1
2
3
4
As when i + 4 it will meet the if condition and the program will execute the break statement and it will exit the while loop.

### 7 Additional Resources
[Cpp Tutorial](https://www.w3schools.com/cpp/)

[Advanced Tutorial](https://www.tutorialspoint.com/cplusplus/cpp_basic_syntax.htm)

[Exercises](https://www.doc.ic.ac.uk/~wjk/c++intro/RobMillerE5.html)
