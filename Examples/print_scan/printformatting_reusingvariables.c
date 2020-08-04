//These are preprocessor directives
//  Before program is compiled, it will use #include to grab the library
//  And #define to define "global" variables
//      Note: do not use equals signs for define
#include <stdio.h>  //standard input and output
#define MAX 89

/*
*
* To run:
* Use shortcut Ctrl + Shift + C to bring up a cmd terminal
* If you are using mingw 32 bit, use command: mingw32-make run
* If you are using mingw 64 bit (or have changed mingw32-make to make) 
*    use command: make run
* See Makefile for what is happening in background
*/

//this is main - it is what your program will always look for first
//  main returns an integer.  If it reaches the bottom with no errors, 
//  it will return 0, just like we told it
//  if it does run into an error, it will automatically return 1, to 
//  indictate the program had a run-time error
//  main does not expect input, as indicated by the word void.  You could leave 
//  it blank, but it is good practice to be verbose
int main (void) {
    int i = 545;
    double radius = 2.9;
    //print initial value of i
    printf("%d\n", i);
    double pi = 3.14159;
    
    //let's use i to store or calculated area
    //  right now, i is an integer
    //  so even though our calculations use doubles (radius and pi)
    //  i will cut off the decimal precision and only store an integer
    i = pi * (radius*radius);

    printf("Our area is: %.3d\n\n", i);


    double p = -567.9324534;
    //sample of variable formatting, sets a field width of 10
    //   and rounds to nearest 2 decimal places
    printf("We can format %f to have two decimal places with %10.2f", p, p);

    return 0;
}