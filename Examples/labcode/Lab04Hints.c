#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>

//prototype function
void add_nums(double, double);
//int adder(int, int);


int main (void) {
    //ask the user to pick a mathematical operation to perform
    //print menu here with printf

    //Use a loop to check that the user has entered a valid input. 

    printf("Enter the mathemical operation [a, s, m, d, o]:");
    char option = 'a';
    scanf("%c", &option);

    //prompt the user for two numbers 
    printf("Enter two numbers (put a space between the numbers) and hit Enter:");
    double num1; double num2;
    scanf("%lf %lf", &num1, &num2);

    //Use a switch statment in your main to call the function for the 
    //  corresponding character input.
    switch (option){
        case 'a':
            printf("Calling add");
            add_num(num1, num2);
            break;
        default:
            printf("No worky");
    }

    return 0;
}

void add_num (double a, double b){
    //4.5 and 9 added together is 13.5
    printf("%lf and %lf added together is %lf", a, b, a+b);
    return;
}



