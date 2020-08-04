#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
#define PI 3.14159

//prototype function
double circle_area(double);
//int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf

int main (void) {
    //set value for radius
    double inner_radius = 5.5;
    double outer_radius = 10.0;

    double inner_area = circle_area(inner_radius);
    double outer_area = circle_area(outer_radius);
    
    double ring_area = outer_area - inner_area;
    printf("Area of ring is %.2lf", ring_area);
  
    return 0;
}

double circle_area (double radius) {
    //area of a circle = PI * r^2
    double part1 = pow(radius,2);
    double result = PI * part1;
    return result;
}

