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
    //Create a variable called answer
    int answer = 45;
    //Create a variable called guess
    int guess;
    //Ask the user, save to guess
    printf("Enter a guess: ");
    scanf("%d", &guess);
    printf("User enter %d as their guess\n", guess);
    while(getchar() != '\n');
    //check guess between 1 and 100
    if(guess >= 1 && guess <= 100){
      //want to base +/- 5 of ANSWER, not GUESS
      int answer_high = answer + 5;
      int answer_low = answer - 5;
      //Check if the guess is equal to the answer
      if (guess == answer){
        printf("You got it!");
      }
      //Check if the guess is within 5 of the correct answer
      else if(answer_low <= guess && guess <= answer_high) { 
        //Print getting hot!
        printf("Getting hot!\n");
      }
      //If the guess is more than 5 of the correct answer
      else{
        //Print getting cold!
        printf("Getting cold\n");
      }
    }
    //catch if guess was not between 1 and 100
    else {
      printf("Guess was not between 1 and 100.\n");
      continue;
    }
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
    if (choice == 'n'){
      printf("User selected n, moving on");
      break;
    }
    printf("User entered %c \n", choice);
  }

  printf("All done with loop");

  return 0;
}