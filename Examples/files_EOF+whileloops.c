//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

void close_out(FILE *, FILE *);

int main(void) {
  FILE * input_file;
  FILE * output_file;
  input_file = fopen("input.txt", "r");
  output_file = fopen("output.txt", "w");
  int num1;
  int num2;
  int result;
  //scan until (while) EOF is found
  while (fscanf(input_file, "%d %d", &num1, &num2) != EOF){
    //using the switch statement
      //do the math
      result = num1 + num2;
      printf("Result is: %d\n", result);
      fprintf(output_file, "%d\n", result);
      //output operation result to terminal & to file
  }
  //int happened;
  //happened = fscanf(input_file, "%d", &num1);
  //printf ("Verification = %d\n", happened);
  printf("Got %d and %d from input file\n", num1, num2);
  fprintf(output_file, "Got %d and %d from input file\n", num1, num2);
  fprintf(output_file, "I am a sentence\n");
  fputs("Hello worlds", output_file);

  close_out(input_file, output_file);
  

  return 0; 
}

void close_out(FILE * input_file, FILE * output_file){
  fclose(input_file);
  fclose(output_file);
}

