#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 *  define a function printName with 0 arguments
 * printName should take someone's name as input from terminal, and print "Hello, <name>!" to terminal
*/

void printName() {
    
}

/**
 * define a function autoGrade with 1 argument, score
 * you must ensure that score is an int between 0 and 100 (otherwise print an appropriate message and end the program)
 * print to terminal a message depending on the value of score
 * F IN THE CHAT if score is between 0 and 39
 * GOOD SCORE if score is between 40 and 69
 * EXCELLENT SCORE if score is between 70 and 99
 * PERFECt SCORE if score is 100
 */

void autoGrade(int score) {

}

/**
 * define a function tempConverter with 2 arguments, temperature and toCelsius
 * temperature should be a float
 * toCelsius should be a boolean
 * if toCelsius is true, it converts temperature from Fahrenheit to Celsius, using F = C*(9/5) + 32
 * if toCelsius is false, it converts temperature from Celsius to Fahrenheit, using C = (F - 32)*(5/9)
 * you should return the converted temperature, and print a message to terminal of the form:
 * 
 * Old Temperature: <temperature>ºX
 * New Temperature: <converted temperature>ºX'
 * 
 * where X is C if the original temperature was in celsius, and F otherwise
 * where X' is C if the converted temperature is in clsius, and F otheriwse
 * make sure you include the newline when printing to terminal
 * 
 * For example, tempConverter(32, true) := 0
 * You might be interested in using printf instead of cout
*/ 

float tempConverter(float temperature, bool toCelsius) {
    return newTemp;
}

/**
 * define a function absSum with 1 argument, numbers
 * numbers is a vector of ints
 * the function should return the value of the sum of the absolute values of the elements of numbers
 * then, print this number
 * 
 * For example, absSum(<1,-3,8,-2>) := 14
*/ 

int absSum(vector<int> numbers) {
    return 0;
}

/**
 * define a function countSyllables with 1 argument, word
 * word is a string, which has dashes between its syllabels
 * countSyllables should return the number of syllables in a word
 * it should also print the following message to terminal:
 * 
 * Word <word> has <number of syllables> syllables!
 * 
 * For example, countSyllables("hu-ma-noid") := 3
*/ 

int countSyllables(string word) {

    return 0;
}

/**
 * define a function stringModifier with 2 arguments, word and reverse
 * word is a string, reverse is a boolean
 * if reverse is true, you should return word reversed
 * 
 * For example, stringModifier("I love Humaned", true) := "denamuH evol I" 
 * 
 * if reverse is false, you should modify word, such that each vowel gets replaced by an ampersand (&)
 * 
 * For example, stringModifier("I love Humaned", false) := "& l&v& H&m&n&d"
*/ 

string stringModifier(string word, bool reverse) {

    return "Hello World";
}

/**
 * define a function approximatePi iwth 1 argumen, trials
 * trials is an int
 * approximatePi should you use the fact that the probability that any 2 numbers are coprime is 6/pi^2
 * the steps to follow are:
 * 1) generate trials many PAIRS of random numbers (you can use the standard function rand())
 * 2) count how many of the pairs are coprime (2 numbers are coprime if their greatest common divisor (gcd) is 1)
 * 3) compute the probability that, in the given sample, any 2 numbers are coprime (n of coprimes/trials)
 * 4) use this as an approximation for 6/pi^2; we can rearrange to find an approximation for pi
 * return the approximation for pi, and also print it to terminal with an appropriate message
 * you can use the function gcd to check whether 2 numbers are coprime or not
*/ 

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

float approximatePi(int trials) {
    return 3.14159;
}





int main(){
    return 0;
}
