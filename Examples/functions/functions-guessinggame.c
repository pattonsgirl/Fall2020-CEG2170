#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
#define PI 3.14159

//prototype function
void guess_check(int, int);
//int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf

int main (void) {
    int answer = 50;
    int guess = 40;

    guess_check(answer, guess);
  
    return 0;
}

void guess_check(int answer, int guess){
    printf("Make your guess (betweeen 0 and 100): ");
    scanf("%lf", &guess);
    //check if guess is greater than or equal to 0 
    //  AND check if guess is less than or equal to 100
    if(0 >= guess && guess <= 100){
        //if the guess is in bounds, 
        //we can now see if the guess was right
        if (guess == answer) {
            printf("That's right!");
            return;
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
}


/*
* Function: adder - adds two numbers together
* Expects two integers
* Returns one integer
*/
/*int adder(int num1, int num2){
    printf("I'm in this function!\n");
    return num1+num2;
}*/


