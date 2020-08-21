#include <stdio.h>  //standard input and 
#include <math.h>
#include <stdlib.h>
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

int main (void) {
    int num = 0;
    double dec_num = 9.0;
    int int_result;
    double dbl_result;

    //do these two calculations hold the same result?
    //  the integer one will truncate the decimal place after division
    //  the double one will store the full result
    int_result = num / dec_num;
    dbl_result = num / dec_num;

    //library from math.h is pow()
    //  we have to remmebr to capture a return value if expected
    //  if we don't these are called logic errors
    double result = pow(num, 5);

    return 0;
}