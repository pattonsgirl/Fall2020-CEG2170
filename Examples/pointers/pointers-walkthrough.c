#include <stdio.h>

int main (void){
    //simple pointer play
    //declare a pointer
    int *intp;
    //declare a regular variable
    int add_int;
    //put a known value in that variable (initialize it)
    add_int = 9;
    //set the value of the pointer to the address of the variable
    intp = &add_int;
    //if I had done this, I would set the value at the address stored in the pointer
    //  to equal the address of the variable
    //*intp = &add_int;
    //go to the address of add_int, and replace the value there with 7
    *intp = 7;
    printf("%d", intp);

    return 0;
}

