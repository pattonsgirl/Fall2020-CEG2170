#include <stdio.h>

int main(void) {  
  //code up a switch statement
  int num1;
  int num2;
  int result = 0;
  printf("Enter two numbers separated by a space: ");
  scanf("%d %d", &num1, &num2);
  //fflush(stdin);
  char selection;
  printf("Enter a for add or s for subtract:");
  //fflush(stdin);
  while(getchar() != '\n');
  //scanf("%c", &selection);
  selection = getchar();
  switch (selection){
    case 'a':
      //stuff to do
      result = num1 + num2;
      printf("Operation result is: %d", result);
      break;
    case 's':
      result = num1 - num2;
      break;
    default:
      //if nothing else meets the cases
      printf("Bad input");
      break;
  }
  printf("Operation result is: %d", result);
  printf("You selected the %c operation",selection);

  return 0;
}