//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  char selection;
  //variable that holds user desire
  char choice = 'y';
  //loop that keeps going as long as the user wants to go again
  while (choice == 'y' || choice == 'Y'){
  //while (toupper(choice) == 'Y'){
    printf("Enter a for add or s for subtract:");
    //fflush(stdin);
    scanf("%c", &selection);
    while(getchar() != '\n');
    //choice = 'n';
    //prompt user for go again (or not)
    printf("Would you like to go again?");
    scanf("%c", &choice);
    while(getchar() != '\n');
    //choice can only be y or n
    //purpose of loop is to prompt user for valid input
    while (!(choice=='y' || choice=='Y' || choice =='n'|| choice=='N')){
      printf("INVALID INPUT.  Enter y or n:");
      scanf("%c", &choice);
      while(getchar() != '\n');
    }
    printf("User entered %c \n", choice);
  }

  printf("All done with loop");

  return 0;
}