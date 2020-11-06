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

void print_planet (planet_t);
void change_moons (planet_t *, int);
void change_name (planet_t *, char []);
planet_t create_planet (void);

int main(void) {
  planet_t earth;
  strcpy(earth.planet_name, "Earth");
  earth.moons = 1;
  printf("Name: %s\n",earth.planet_name);
  printf("Moons: %d\n", earth.moons);
  print_planet(earth);
  change_moons(&earth, 2);
  change_name(&earth, "Blue");
  print_planet(earth);

  planet_t this_world = create_planet();
  print_planet(this_world);

  solar_sys_t sol;
  strcpy(sol.name, "Sol");
  strcpy(sol.planets[0].planet_name, "Mercury");
  strcpy(sol.planets[1].planet_name, "Venus");
  strcpy(sol.planets[2].planet_name, "Earth");
  sol.planets[0].moons = 0;
  print_planet(sol.planets[0]);

  return 0;
}

void change_name(planet_t *planet, char new_name[]){
  strcpy(planet->planet_name, new_name);
}

void change_moons(planet_t *planet, int new_moons){
  printf("How many moons now?\n");
  scanf("%d", &(*planet).moons);
  while ((getchar()) != '\n');
  //scanf("%d", &planet->moons);
  planet->moons = new_moons;
}

planet_t create_planet (void){
  planet_t new_planet;
  printf("New planet name?\n");
  char name [20];
  fgets(name, strlen(name)-1, stdin);
  //gets(name);
  //while ((getchar()) != '\n');
  strcpy(new_planet.planet_name, name);
  //scanf("%s", new_planet.planet_name);
  printf("New planet moons?\n");
  scanf("%d", &new_planet.moons);
  return new_planet;
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


