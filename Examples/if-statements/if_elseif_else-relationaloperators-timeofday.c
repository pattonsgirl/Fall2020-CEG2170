    
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
    int time = 0;
    scanf("%d", &time);
    //if time is between 0 /exclusively/ and 12 /exclusively/, print something
    if(0 < time && time < 12){
        printf("Good morning");
    }
    //otherwise if time is between 12 /inclusively/ and 18 /inclusively/, print something
    else if (12 <= time && time <= 18){
        printf("Good afternoon");
    }
    //otherwise if time is between 18 /inclusively/ and 24 /inclusively/, print something
    else if(18 <= time && time <= 24){
        printf("Good night!");
    }
    else {
        printf("Time entered was not valid.");
    }

    //Questions to ask:
    //  If time was 0, what would happen?
    //  If time was 16, what would happen?
    //  If time was 18, what would happen?

    return 0;

}