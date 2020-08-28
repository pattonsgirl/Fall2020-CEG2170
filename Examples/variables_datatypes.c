//libraries
//files that we need to include
#include <stdio.h>


int main(void) {
  char my_char = 'a';
  int my_int = 42;
  printf("The value of my_int is %d\n", my_int);
  float my_float = 8.23829;
  double my_double = 238491.984132984923;
  my_double = my_int;
  my_double = my_float;
  my_double = 1328390.2314893204;
  //my_int now has value 1328390
  my_int = my_double;
  printf("Hello World\n");
  printf("The value of my_float is %f\n", my_float);
  return 0;
}