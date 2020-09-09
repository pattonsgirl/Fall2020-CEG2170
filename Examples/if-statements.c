//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
//unchanging, constant, static PI
//#define PI = 3.14159


int main(void) {
  //time is in 24 hour format
  int time = 0;
  printf("Enter a time: ");
  scanf("%d", &time);

  //if the value is greater than 4
  //then print good morning!
  if((time >= 4) && (time <= 11)){
    
    printf("Good morning!\n");
  } 
  else if(time > 11 && time < 14){
    printf("Lunch time!\n");
  }
  else if(time <= 24){
    printf("Good evening!\n");
  }
  else {
    printf("Invalid time!\n");
  }

  /*if((time >= 4) && (time <= 11)){
    printf("A!\n");
  }
  if((time >= 4) && (time <= 11)){
    printf("B!\n");
  }
  if((time >= 4) && (time <= 11)){
    printf("C!\n");
  }*/

  printf("End of program\n");

  return 0;
}