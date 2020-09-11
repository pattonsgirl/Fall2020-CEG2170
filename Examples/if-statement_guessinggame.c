//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
//unchanging, constant, static PI
//#define PI = 3.14159


int main(void) {
  //Create a variable called answer
  int answer = 45;
  //Create a variable called guess
  int guess;
  //Ask the user, save to guess
  printf("Enter a guess: ");
  scanf("%d", &guess);
  //check guess between 1 and 100
  if(guess >= 1 && guess <= 100){
    //want to base +/- 5 of ANSWER, not GUESS
    int answer_high = answer + 5;
    int answer_low = answer - 5;
    //int close_high = guess + 5;
    //int close_low = guess - 5;
    //Check if the guess is equal to the answer
    if (guess == answer){
      printf("You got it!");
    }
    //Check if the guess is within 5 of the correct answer
    else if(answer_low <= guess && guess <= answer_high) {
    //else if(close_high <= answer) {
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
  }
  printf("Exiting\n");

  return 0;
}