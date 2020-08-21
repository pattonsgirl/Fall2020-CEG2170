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
    char letter;
    //int num;

    //I could use scanf
    //or we can start using getchar - this gets a single character from cmd 
    //this loop will keep running until a new line character   
    while(1){
        letter = getchar();
        printf("User entered %c\n", letter);
        if (letter == '\n'){
            return 0;
        }
    }
    //loop while NOT equal to
    //simplified (NEW) way of clearing out our buffer
    while(getchar() != '\n');

    return 0;
}