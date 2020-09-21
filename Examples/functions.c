//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

//this is where prototypes go
void message_printer (void);
int adder (void);
int add_nums(int, int);
double average (int, int, int, int);

int main(void) {
  char store_char;
  //store_char = getchar();
  printf("Hello worlds\n");
  message_printer();
  int adder_return;
  adder_return = adder();
  printf("%d\n", adder_return);
  int add_num_return;
  add_num_return = add_nums(9, 32);
  printf("%d\n", add_num_return);
  double average_value = average(76,45,34,90);
  average_value = average(80,98,65,80);
  printf("%lf\n", average_value);
  return 0;
}

double average (int num1, int num2, int num3, int num4){
  int total = num1+num2+num3+num4;
  double average = total / 4;
  return average;
}

int add_nums (int num1, int num2){
  int total = num1 + num2;
  return total;
}

int adder (void) {
  int num1 = 67;
  int num2 = 89;
  int total = num1 + num2;
  return total;
}

void message_printer (void) {
  printf("My message printer\n");
}