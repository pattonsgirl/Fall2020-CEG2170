#include <stdio.h>
#include <stdlib.h>  //needed to flush buffer


int main(void){
    // by initializing the variable to y, my loop will start.
    //  otherwise, I would need to get user input before I could start my loop
    char goagain = 'y';
    double age = 0.0;

    while(goagain == 'y'){
        printf("Enter an age to evaluate: ");
        scanf("%lf", &age);
        fflush(stdin);

        if (age <= 1){
            printf("Just a baby!\n");
        }
        else if (age > 1 && age < 13){
            printf("Just a kid!\n");
        }
        else if (age >= 13 && age < 20){
            printf("Get off my lawn!\n");
        }
        else if (age >= 20){
            printf("You're getting old!\n");
        }
        //we could have set a bound, but it wasn't explicity asked for
        else {
            printf("Enter a positive number\n");
        }
        
        //while(getchar() != '\n');
        printf("Would you like to enter another number (y/n): ");
        goagain = getchar();
    }

    return 0;
}