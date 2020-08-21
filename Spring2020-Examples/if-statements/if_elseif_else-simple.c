#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
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
    char letter = 'i';
    printf("Welcome to calculator.  Would you like to do a calculation?");
    //y for yes
    //n for no
    //x (where x is any other character) for error
    scanf("%c", &letter);
    //If the letter is 'y', let's print a message to indicate something is happening
    if (letter == 'y'){
        printf("Enter your calculation");
    }
    //Otherwise if the letter is 'n', let's print a message to indicate that 
    //  something else is happening 
    else if (letter == 'n'){
        printf("Then have a good day");
    }
    //Otherwise the letter was something we were not expecting, and we can print
    //  an error prompt
    else {
        printf("Learn your keyboard.");
    }

    return 0;
}