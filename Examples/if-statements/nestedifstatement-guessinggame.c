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
/*
Write a basic guessing game.​
Create a variable called answer​
Create a variable called guess​
Ask the user for a guess between 1 and 100​
Check if the guess is equal to the answer​
Check if the guess is too high or too low (print something 
    useful to go with each condition)​
If the guess was out of bounds, print an error message​
*/

    int answer = 50;
    int guess = 0;
    
    printf("Make your guess (betweeen 0 and 100): ");
    scanf("%lf", &guess);
    //check if guess is greater than or equal to 0 
    //  AND check if guess is less than or equal to 100
    if(0 >= guess && guess <= 100){
        //if the guess is in bounds, 
        //we can now see if the guess was right
        if (guess == answer) {
            printf("That's right!");
        }
        //if the guess was in bounds, but was not the right answer, 
        //  it will be caught in our else
        else {
            printf("No luck :(");
        }
    }
    //otherwise, the guess was out of bounds.
    else {
        printf("Guess was out of bounds.");
    }

    return 0;
}