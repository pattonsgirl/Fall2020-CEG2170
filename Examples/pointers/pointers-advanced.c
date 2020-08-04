#include <stdio.h>

//this function adds two numbers together
//  no return value
//  three parameters (two input, one output)
//  when the word output parameter is used, 
//      that indicates pointers
void add_nums(double, double, double *);

int main (void){
    double num1 = 7.5;
    double num2 = 3.4;
    //declaring a variable & initializing it to 0
    double result = 0.0;
    
    //I can go about using pointers two ways.
    //The short way:
    //call the function, send it 2 value and the address of the variable
    //  I want to manipulate in the function
    add_nums(num1, num2, &result);
    //now I can do a regular print statement:
    printf("%lf\n", result);

    //The long way:
    //declare a pointer
    double *resultp;
    //store the address of result in the pointer
    resultp = &result;
    //call the function, send it 2 values and the address stored in the pointer
    add_nums(num1, num2, resultp);
    //I can do a regular print statement
    printf("%lf\n", result);
    //OR I can print using the pointer
    //  this will use the value stored at the address in the pointer
    printf("%lf", *resultp);



    return 0;
}


//this function adds two numbers together
//  num1 and num2 are values passed into the function by main
//  resultp will store an address of a variable in main
//  the function does not return a value
//  it manipulates the value stored at an address
void add_nums(double num1, double num2, double *resultp){
    //go to the address stored in the pointer, 
    //  replace the value there with num1 + num2
    *resultp = num1 + num2;
    return;
}

