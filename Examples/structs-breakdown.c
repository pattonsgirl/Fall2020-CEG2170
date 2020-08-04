#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_MODEL_NAME 20

/*Write a structure called bike_t that would store the following: the model name of bicycle, the number of wheels, the number of pedals, and the size of the wheels.
*/
typedef struct {
    char model[MAX_MODEL_NAME];
    int wheels;
    int pedals;
    double wheel_size;
} bike_t;

//I have a variable student of type student_t with the following variables: name, uid, and gpa.  How do I put a gpa value of 3.4 in student?
typedef struct {
    char name[MAX_MODEL_NAME];
    int uid;
    double gpa;
} student_t;

//The structure variable earth of type world_t has been passed to a function as a pointer.  List one way to access the ocean variable inside world.

typedef struct {
    double ocean;
}world_t;

//set_gpa
void set_gpa (student_t , double);
void print_ocean (world_t *);


int main (void){
    double num = 0.0;
    double *nump;
    nump = &num;
    *nump = 7.8;
    printf("\n%lf\n", num);

    bike_t bike;
    bike.pedals = 4;
    //bike_t bobs_bike;
    //bobs_bike.pedals = 8;
    bike_t *bikep;
    bikep = &bike;
    (*bikep).pedals = 12;
    bikep->pedals = 12;
    printf("\n Pedals is now: %d \n", bike.pedals);
    printf("\n Pedals is now: %d \n", bikep->pedals);

    strcpy(bike.model, "Kona");

    student_t student;
    student.gpa = 0.0;
    set_gpa(student,3.4);
    printf("Student GPA is now: %lf", student.gpa);


    world_t earth;
    print_ocean(&earth);

    return 0;
}

void print_ocean(world_t *earth){
    printf("\nMy ocean is: %lf\n", (*earth).ocean);
    printf("\nMy ocean is: %lf\n", earth->ocean);
    scanf("%lf", &(*earth).ocean);
    return;
}

void set_gpa (student_t s, double gpa){
    s.gpa = gpa;
    printf("Student GPA is now: %lf", s.gpa);
    return;
}


