//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define GRADE_ARRAY_SIZE 4

int grade_array_size = 34;

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
  //grade_array_size = 67;
  printf("size of int size is: %lu\n", sizeof(size));
  printf("size of int size is: %lu\n", sizeof(my_first_array));
  size = sizeof(my_first_array)/sizeof(my_first_array[0]);
  printf("Number of elements / blocks in array: %d\n", size);
  for(int i = 0; i < size; i++){
    printf("Contents of array at element %d is %d\n", i, my_first_array[i]);
  }
  int num1, num2, num3, num4;
  int grades [grade_array_size];
  for (int i = 0; i < grade_array_size; i++){
    printf("Input a grade: ");
    scanf("%d", &grades[i]);
    printf("\nEntered grade: %d\n", grades[i]);
  }
  //find average
  int total = 0;
  for (int i = 0; i < grade_array_size; i++){
    total = total + grades[i];
    printf("Value of total is %d\n", total);
  }
  printf("Average value is: %lf", (double)(total / grade_array_size));

  //printf("Contents of array: %d\n", my_first_array);
  //char sentence [80] = {'A','p','p','l','e'};
  //char sentence [80] = {"Apple orange banana kiwi"};
  //printf("%s\n", sentence);
  //printf("%c", sentence[10]);

  return 0; 
}


