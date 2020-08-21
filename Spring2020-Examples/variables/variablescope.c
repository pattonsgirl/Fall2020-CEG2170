#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#include <math.h>
//this is a defined value.  There is no way to change it.  
//  Short of coming up here and editing it.
#define PI 3.14159

//prototype function
void circle_area(double);
//int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf

//global variables
int num = 7;
double area = 0;

int main (void) {
    //variables declared in here are local variables
    //set value for radius
    double inner_radius = 5.5;
    double outer_radius = 10.0;
    //scanf("%lf", &inner_radius);
    //scanf("%lf", &outer_radius);

    num++;
    printf("\n%d\n", num);

    //circle_area(inner_radius);
    //double inner_area = circle_area(inner_radius); // num is now 9
    circle_area(inner_radius);
    double inner_area = area;
    //double outer_area = circle_area(outer_radius); // num is now 10
    circle_area(outer_radius);
    double outer_area = area;

    //let's say I do some other stuff
    //area = 0;
    
    printf("\n%d\n",num);
    double ring_area = outer_area - inner_area;
    printf("Area of ring is %.2lf", ring_area);
  
    return 0;
}

void circle_area (double radius) {
    //variables declared in here are local variables
    //area of a circle = PI * r^2
    num++;
    double part1 = pow(radius,2);
    double result = PI * part1;
    area = result;
    return;
}
