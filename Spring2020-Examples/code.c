#include <stdio.h>
#define MAX_NAME 15
#define MAX_VEHICLES 5

typedef struct {
    char make[MAX_NAME];
    char model[MAX_NAME];
    int year;
    double mileage;
} vehicle_t;

typedef struct {
    vehicle_t motors [MAX_VEHICLES];
} garage_t;

//void read_info (garage_t *);
void print_all (garage_t *);

int main (void){ 
    garage_t my_garage; 
    //read_info (&my_garage);
    print_all (&my_garage);    
    return 0;
}

void print_all (garage_t *g){
    for (int i = 0; i < MAX_VEHICLES; i++){
        printf("%s: %s %d %lf\n", g->motors[i].make, g->motors[i].model, 
            g->motors[i].year, g->motors[i].mileage);
    }
}


