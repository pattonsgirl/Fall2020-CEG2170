#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
#define PI 3.14159

//prototype function
double circle_area(double);
void mod_circle_area(double, double *);
int foo(char, int);
//int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf
//double global = 0;

int main (void) {
    //set value for radius
    double inner_radius = 5.5;
    double outer_radius = 10.0;
    //create FILE pointers for address of files
    FILE *inputp;
    FILE *outputp;
    //need to open files in a mode.  r to read to the file, w to write to the file
    inputp = fopen("input.txt","r");
    outputp = fopen("output.txt", "w");

    //scan a line of the file for input
    // EOF = END OF FILE
    while(fscanf(inputp, "%lf %lf", &inner_radius, &outer_radius) != EOF){
        fprintf(outputp, "%lf %lf\n", inner_radius, outer_radius);
    }
    double ring_radius = outer_radius - inner_radius;
    double inner_area = 0.0;
    double outer_area = 0.0;
    //need the radius from main (input parameter)
    //  and an ADDRESS to save the value to (output parameter)
    mod_circle_area (inner_radius, &inner_area);
    printf("the inner address being sent is: %p", &inner_area);
    mod_circle_area (outer_radius, &outer_area);
    //when we use the variables to do more math / operations, use them normally
    //this is the idea 
    double ring_area = (int)outer_area - (int)inner_area;
    fprintf(outputp, "%lf", ring_area);    

    //put your fclose down here
    fclose(inputp);
    fclose(outputp);
    //fprintf(outputp,"%lf",inner_radius);
    return 0;
}

double circle_area (double radius) {
    //area of a circle = PI * r^2
    double result = PI * pow(radius,2);
    return result;
}

void mod_circle_area(double radius, double *result){
    //printf("Value that the pointer points to: %lf\n", *result);
    *result = PI * pow(radius, 2);
    printf("Value that the pointer points to: %p\n", *result);
    return;
}


int foo(char letter, int num){
    return 1;
}

