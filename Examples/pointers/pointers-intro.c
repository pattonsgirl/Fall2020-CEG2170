#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
#define PI 3.14159

//prototype function
double circle_area(double);
void mod_circle_area(double, double*);
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
    fscanf(inputp, "%lf %lf", &inner_radius, &outer_radius);

    double inner_area = circle_area(inner_radius);
    double outer_area = circle_area(outer_radius);
    
    double ring_area = outer_area - inner_area;

    //writing out down here where ring_area is defined
    fprintf(outputp, "The out was %lf\n the inner was %lf\n \
    ring area is %lf", outer_area, inner_area, ring_area);

    //if I forget to use the &, it will throw a compilation error
    double *ringp = &ring_area;
    //playing with pointers and what prints what
    printf("Area of ring is %.2lf\n", ring_area);
    printf("Address of the variable ring_area is %p\n", &ring_area);
    printf("Address stored by pointer: %p\n", ringp);
    printf("Value that the pointer points to: %lf\n", *ringp);
    //be careful, and don't do this. What we are doing here is looking up the 
    //  address of the pointer ringp, which is not the same thing as pointing to
    //  the address or contents of ring_area
    printf("Address value of the pointer: %p\n", &ringp);
    //printf("Ring area with mod_circle_area function is: %lf", (out_area - in_area));
    
    return 0;
}

double circle_area (double radius) {
    //area of a circle = PI * r^2
    double part1 = pow(radius,2);
    double result = PI * part1;
    return result;
}

void mod_circle_area(double radius, double *result){
    *result = PI * pow(radius, 2);
    printf("Value that the pointer points to: %lf\n", *result);
    return;
}


int foo(char letter, int num){
    return 1;
}

