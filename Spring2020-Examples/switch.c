#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer

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
    int num;

    //if num = 1, print you are number 1

    //if num = 2   , print you are number 2

    char grade = 'B';
    grade = getchar();

    switch(grade) {
        case 'A' :
            printf("Excellent!\n" );
            break;
        case 'B' :
        case 'C' :
            printf("Well done\n" );
            break;
        case 'D' :
            printf("You passed\n" );
            break;
        case 'F' :
            printf("Better try again\n" );
            break;
        default :
            printf("Invalid grade\n" );
    }
    
    printf("Your grade is  %c\n", grade );

    

    return 0;
}