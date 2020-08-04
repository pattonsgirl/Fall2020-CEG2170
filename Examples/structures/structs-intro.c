#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_NAME 20

typedef struct {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_t;
//to initialize the type when creating a new variable:
//  planet_t new_planet

struct planet_t {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
};
//to initialize the type when creating a new variable, I now need to say:
//  struct planet_t new_planet

struct planet_t {
    char name[MAX_NAME];
    double diameter, orbit_time, rotation_time;
    int moons;
} planet_new, planet_old;
//pre-initialize of variables that are of type planet_t
//  planet_new and planet_old can now be used in any function including main

typedef struct{
    double diameter;
    planet_t planets [9];
    char name[MAX_NAME];
} solar_sys_t;

int main (void){
    int num;
    planet_t new_planet;
    //new_planet = {"", 0, 0, 0, 0};
    strcpy(new_planet.name, "This Land");
    printf("%s", new_planet.name);
    new_planet.moons = 15;
    printf("%d", new_planet.moons);
    planet_t old_planet = new_planet;

    solar_sys_t solarize_me;
    strcpy(solarize_me.planets[0].name, "Mercury");
    //planets;
    return 0;
}




/*


typedef struct {
    char name[MAX_NAME];
    //planet_t[9];
    double diameter;
} solar_sys_t;*/

