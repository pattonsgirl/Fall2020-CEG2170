//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  FILE * input_file;
  FILE * output_file;
  input_file = fopen("input.txt", "r");
  output_file = fopen("output.txt", "w");

  fprintf(output_file, "I AM HERE!");
  fprintf(output_file, "The result of division was: %lf\n", 98.1);
  char line;
  fscanf(input_file, "%c", &line);
  printf("Got %c from input file\n", line);

  return 0; 
}