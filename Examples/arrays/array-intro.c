#include <stdio.h>

#define SIZE 5

int main (void){
    //intializing arrays
    //double trouble [8];
    int num_list[SIZE] = {1990, 35, 1550, 45, 1991, 80};
    //do java and c treat arrays similarly
    //you can choose to not put size, but then you must initialize
    //int without_size_num_list [] = {1, 3, 5, 7, 9};
    for (int i = 0; i < SIZE; i++ ){
        int upper = 5;
        num_list[i] = num_list[i] + upper;
        printf("%d\n", num_list[i]);
    }
    
    return 0;
}

