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
    char letter = 'k';
    //if statement - takes a condition
    //  based on the result, it then performs an action (or not)
    scanf("%c", &letter);
    //we needed to flush the buffer since it is holding the "enter" 
    //  character from typing in our letter
    fflush(stdin);
    //the condition (letter == 'y') must be true for the action(s) in brackets to be performed
    if (letter == 'y'){ 
         printf("Letter was correct!");
    }
    //what to do if the letter was not 'y'
    else {
        printf("Wrong letter!");
        //we could then ask for a new letter
        //  if we did /not/ use the fflush(stdin), then the program would 
        //  have used the "Enter" key we pressed in the previous input as
        //  our next input.
        scanf("%c", &letter);
        //Note: if we were to ask for an input again (after this), then we
        //  would need to flush the buffer again with fflush(stdin)
        if (letter == 'y'){
            printf("Letter was correct!");
        }
    }

    return 0;
}