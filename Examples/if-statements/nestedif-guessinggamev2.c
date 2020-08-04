#include <stdio.h>  //standard input and ouput

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
    Check if the guess is within 5 digits of the correct answer​
        Print getting hot!​
    If the guess is more than 5 digits of the correct answer​
        Print getting cold!​
If the guess was out of bounds, print an error message​
*/

    int answer = 50;
    int guess = 0;
    
    printf("Make your guess (betweeen 0 and 100): ");
    scanf("%d", &guess);
    //check if guess is greater than or equal to 0 
    //  AND check if guess is less than or equal to 100
    if(guess >= 0 && guess <= 100){
        //if the guess is in bounds, 
        //we can now see if the guess was right
        if (guess == answer) {
            printf("That's right!");
        }
        //if I use the else statement commented out below, I get an error that says 
        //  the x<y<z list does not have its mathematical meaning because we can't 
        //  combine comparisons sometimes it will work anyways, but that's an exception, 
        //  not a rule
        //else if(answer - 5 < guess < answer || answer < guess < answer + 5)

        //let's break this monster down
        //My guess gets a special message if it is 5 too low OR (||) 5 too high
        //  On each side of this OR, I need to check two things
        //  For checking 5 too low, I am checking if my guess is greater then 5 below && less than the answer itself
        //  For checking 5 too high, I am checking if my guess is less then 5 higher && greate than the answer itself
        //else if(((answer - 5 < guess) && (guess < answer)) || ((answer < guess) && (guess < answer + 5))){
        
        //This is what we really need (this is called code optimization)
        else if(answer - 5 < guess && guess < answer + 5){
            printf("Getting hotter!");
        }
        //if the guess was in bounds, but was not the right answer (or close), 
        //  it will be caught in our else
        else {
            printf("Getting colder :(");
        }
    }
    //otherwise, the guess was out of bounds.
    else {
        printf("Guess was out of bounds.");
    }

    return 0;
}