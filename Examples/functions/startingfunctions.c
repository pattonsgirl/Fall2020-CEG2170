#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
#define PI 3.14159

//prototype function
void message();
void adding(int, int);
//int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf

int main (void) {
    int num1 = 5;
    int num2 = 10;
    adding(num1, num2);
    message();
    return 0;
}

void adding(int number1, int number2){
    int inital_value = number1;
    printf("These numbers added together = %d\n", number1 + number2);
    return;
}

void message(){
    printf("Welcome to my function\n");
    return;
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


