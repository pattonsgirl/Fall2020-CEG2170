//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

//this is where prototypes go
void my_function (void);

int main(void) {
  char my_char;
  //my_char = getchar();
  double num;
  num = pow(2,3);
  printf("%lf\n",num);
  my_function();
  printf("Back in my main\n");
  my_function();
  printf("Back in my main\n");
  my_function();
  printf("Back in my main\n");
  my_function();
  printf("Back in my main\n");
  //printf("", h)
  //scanf(&var_name);
  return 0;
}

void my_function (void) {
  int num = 89;
  printf("Oh, my, gosh.  I AM HERE.\n");
  printf("%d\n", num);
}
