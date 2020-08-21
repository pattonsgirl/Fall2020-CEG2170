#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer

int main (void) {
    for (int i = 6; i <= 16; i += 2){
        printf("%d ", i);
    }

    printf("\n");
    
    int num = 15;
    while(num > 10){
        num--;
        printf("%d ", num);
    }

    return 0;
}