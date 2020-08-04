#include <stdio.h>
#include <math.h>

int main (void){
    double num [9] = {6.7};
    char name [5] = {"Kayleigh "};

    printf("%s", name);

    int size = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < size; i++){
        printf("%c\n", name[i]);
    }

    return 0;
}