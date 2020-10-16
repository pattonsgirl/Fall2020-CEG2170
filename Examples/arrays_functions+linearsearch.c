//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define GRADE_ARRAY_SIZE 4

int grade_array_size = 15;

void array_printer(int * num_array);
void array_print(const int num_array[], int);

int main(void) {
  int my_first_array [] = {42, 13, 24, 93, 5, 90, 54, 23, 43, 90, 23, 12, 78, 43, 67};

  int * one_element = &my_first_array[9];
  printf("Contents of element: %d\n", *one_element);
  //pass size? calculate & pass size
  //array_printer(&my_first_array[0]);
  //array_printer(my_first_array);
  int size = sizeof(my_first_array) / sizeof(my_first_array[0]);
  array_print(my_first_array, size);

  int search_for_me = 90;
  int counter = 0;
  for (int i = 0; i < size; i++){
    //if the element is equal to what we are searching for do something
    if (my_first_array[i] == search_for_me){
      printf("I'm the same!\n");
      counter++;
      break;
    }
  }
  printf("%d was found %d times", search_for_me, counter);

  
  return 0; 
}

void array_print (const int num_array[], int size){
  //calculate size
  printf("Inside my print array function\n");
  for(int i = 0; i < size; i++){
    printf("Contents of array at element %d is %d\n", i, num_array[i]);
    //num_array[i] = 90; - not allowed once const is used
  }
}

void array_printer (int * num_array){
  //calculate size
  printf("Inside my print array function\n");
  for(int i = 0; i < grade_array_size; i++){
    printf("Contents of array at element %d is %d\n", i, num_array[i]);
  }
}


