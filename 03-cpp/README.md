# C++ Workshop
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
### 5 Loops
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

