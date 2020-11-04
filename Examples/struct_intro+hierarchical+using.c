//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



//planet name, diameter, how many moons, orbit time, and rotation time
typedef struct {
  char planet_name[20];
  double diameter;
  int moons;
  double orbit_time;
  double rotation_time;
} planet_t;
//if this, then
//  planet_t var_name

typedef struct{
  char name[5];
  planet_t planets[9];
} solar_sys_t;

/*struct planet_t {
  char planet_name[20];
  double diameter;
  int moons;
  double orbit_time;
  double rotation_time;
};*/
//if this, then
// struct planet_t var_name

/*struct planet_t {
  char planet_name[20];
  double diameter;
  int moons;
  double orbit_time;
  double rotation_time;
}jupiter;*/

void print_planet (planet_t);

int main(void) {
  typedef int age;

  int num;
  age num2;


  planet_t earth;
  //earth.planet_name = "Marco";
  strcpy(earth.planet_name, "Earth");
  earth.moons = 1;
  printf("Name: %s\n",earth.planet_name);
  printf("Moons: %d\n", earth.moons);

  planet_t mars;
  strcpy(mars.planet_name, "Mars");
  mars.moons = 2;
  print_planet(earth);
  //jupiter.moons = 79;

  solar_sys_t sol;
  strcpy(sol.name, "Sol");
  strcpy(sol.planets[0].planet_name, "Mercury");
  strcpy(sol.planets[1].planet_name, "Venus");
  strcpy(sol.planets[2].planet_name, "Earth");
  sol.planets[0].moons = 0;
  print_planet(sol.planets[0]);

  planet_t planet_copy;
  planet_copy = earth;
  printf("Planet copy\n\n");
  printf("Name: %s\n",planet_copy.planet_name);
  printf("Moons: %d\n", planet_copy.moons);
  strcpy(planet_copy.planet_name, "Silly Name");
  printf("Name: %s\n",planet_copy.planet_name);
  printf("Earth's Name: %s\n", earth.planet_name);

  return 0;
}

void print_planet(planet_t planet){
  printf("Planet properties:\n");
  printf("Name: %s\n",planet.planet_name);
  //strcpy(planet.planet_name, "Haha");
  //printf("Name: %s\n",planet.planet_name);
  printf("Moons: %d\n", planet.moons);
  //diameter
  //orbit_time
  //rotation_time
}

