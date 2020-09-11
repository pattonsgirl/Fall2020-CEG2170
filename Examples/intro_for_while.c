//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//unchanging, constant, static PI
//#define PI = 3.14159


int main(void) {

  //intro to for loop
  for(int items = 0; items <= 50; items++){
    //print how many items picked up so far
    printf("Item %d picked up\n", items);
  }

  //intro to while loop (similar to for loop)
  int count = 0;
  while(count <= 50){
    printf("Count is %d\n", count);
    count++;
  }

  return 0;
}