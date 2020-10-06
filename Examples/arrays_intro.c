//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int my_first_array [] = {42, 13, 24, 93, 5, 90, 54, 23, 43, 90, 23, 12, 78, 43, 67};
  printf("0th element is %d\n", my_first_array [0]);
  printf("0th element address is: %p\n", &my_first_array [0]);
  printf("address of array (= address 0th element): %p\n", &my_first_array);
  printf("1st element is %d\n", my_first_array [1]);
  printf("1st element address is: %p\n", &my_first_array [1]);
  printf("4th element is %d\n", my_first_array [4]);
  printf("4th element address is: %p\n", &my_first_array [4]);
  //loop to go through all elements in array
  int size;
  printf("size of int size is: %lu\n", sizeof(size));
  printf("size of int size is: %lu\n", sizeof(my_first_array));
  size = sizeof(my_first_array)/sizeof(my_first_array[0]);
  for(int i = 0; i < size; i++){
    printf("Contents of array at element %d is %d\n", i, my_first_array[i]);
  }

  //printf("Contents of array: %d\n", my_first_array);
  //char sentence [80] = {'A','p','p','l','e'};
  //char sentence [80] = {"Apple orange banana kiwi"};
  //printf("%s\n", sentence);
  //printf("%c", sentence[10]);

  return 0; 
}


