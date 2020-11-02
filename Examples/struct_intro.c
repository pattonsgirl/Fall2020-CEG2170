//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

//planet name, diameter, how many moons, orbit time, and rotation time
/*typedef struct {
  char planet_name[20];
  double diameter;
  int moons;
  double orbit_time;
  double rotation_time;
} planet_t;*/
//if this, then
//  planet_t var_name

struct planet_t {
  char planet_name[20];
  double diameter;
  int moons;
  double orbit_time;
  double rotation_time;
};
//if this, then
// struct planet_t var_name

int main(void) {
  typedef int age;

  int num;
  age num2;

  struct planet_t earth;
  strcpy(earth.planet_name, "Earth");
  earth.moons = 1;

  struct planet_t mars;
  strcpy(mars.planet_name, "Mars");
  mars.moons = 2;
  return 0;
}
