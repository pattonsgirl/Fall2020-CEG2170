//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  
  int i = 0;
  int total = 0;

  //Does a countdown
  int starting_point = 500;
  int points_removed = 0;
  //how many steps
  int steps = 10;
  for (steps = 10; steps > 0; steps--) {
    //for each step, decrement starting point by 50
    printf("Step: %d \t\t Point value %d\n", steps, starting_point);
    starting_point = starting_point - 50;
    points_removed = points_removed + 50; 
  }
  printf("Total point removed: %d\n\n", points_removed);

  return 0;
}