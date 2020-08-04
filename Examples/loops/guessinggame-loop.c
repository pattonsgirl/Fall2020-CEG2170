#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer

int main (void) {
    //owe a better example of breaks vs continues
    
    //bringing back the guessing game
    int answer = 50;
    int guess = 0;
    
    //printf("Make your guess (betweeen 0 and 100): ");
    //scanf("%lf", &guess);
    //check if guess is greater than or equal to 0 
    //  AND check if guess is less than or equal to 100
    char check = 'y';//getchar();
    while(check == 'y'){
        printf("Make your guess (betweeen 0 and 100): ");
        scanf("%lf", &guess);
        if(0 >= guess && guess <= 100){
            //if the guess is in bounds, 
            //we can now see if the guess was right
            if (guess == answer) {
                printf("That's right!\n");
                //if my answer is right, I don't need to keep running game
                break;
            }
            //if the guess was in bounds, but was not the right answer, 
            //  it will be caught in our else
            else {
                printf("No luck :(\n");
            }
        }
        //otherwise, the guess was out of bounds.
        else {
            printf("Guess was out of bounds.");
        }
        fflush(stdin);
        printf("Guess again?(y/n):");
        check = getchar();
        if (check == 'y'){
            continue;
        }
        else {
            break;
        }
        printf("\nI'm down here\n");

    }
    printf("Thanks for playing!");

    return 0;
}