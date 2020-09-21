//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int i = 0;
  int total = 0;
  //formatting in for loop
  printf("Value of i \t\t Total\n");
  printf("--------------------------------\n");
  //beginning at i = 2, go to 100, & keep a sum
  for (i = 2; i <= 100; i+=3){
    //keeping a running total
    total = total + i;
    printf("%d \t\t\t\t %d\n", i, total);
    //printf("Hello World\n");
  }
  printf("Total between 2 and 100 is %d\n", total);
  
  //break vs continues
  for (i = 2; i <= 100; i+=3){
    //keeping a running total
    if (total >= 500){
      printf("Value of total is: %d", total);
      break; // breaks out of loop
      //continue; //moves to next iteration of loop
    }
    total = total + i;
    printf("%d \t\t\t\t %d\n", i, total);
    
    //printf("Hello World\n");
  }
  printf("Total between 2 and 100 is %d\n", total);

  //not recommended to use same iterator in two different loops- will circle back to this in arrays module
  for (i = 1; i <= 10; i++){
    for (int j = 1; j <= 10; j++){
      //printf("%d %d\n", i, j);
    }
  }

  printf("All done with loop");

  return 0;
}