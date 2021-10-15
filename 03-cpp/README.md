# C++ Workshop
## Basic Syntax
All lines of C++ end with a ; 
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
