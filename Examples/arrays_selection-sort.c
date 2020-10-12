//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define GRADE_ARRAY_SIZE 4

int grade_array_size = 5;

void array_printer(int * num_array);
void array_print(const int num_array[], int);

int main(void) {
  int my_first_array [] = {42, 13, 24, 93, 5, 90, 54, 23, 43, 90, 23, 12, 78, 43, 67};

  array_printer(my_first_array);
  int temp = 0;
  //swap two values.
  // swap out value in 5 with the value in element 0
  //int temp = my_first_array[5];
  //my_first_array[5] = my_first_array[0];
  //my_first_array[0] = temp;

  //printf("Changed array\n");
  //array_printer(my_first_array);

  //sort the array
  // outer loop so that we can have subarrays of what is unsorted
  for (int i = 0; i < grade_array_size; i++){
    // inner loop that compares and finds the min in the sub array
    printf("Next subarray\n");
    for (int j = i+1; j < grade_array_size; j++){
    //  inner loop also handles swapping values
      if (my_first_array[i] > my_first_array[j]){
        printf("Swapping current min %d with new min %d\n", my_first_array[i], my_first_array[j]);

        temp = my_first_array[i];
        my_first_array[i] = my_first_array[j];
        my_first_array[j] = temp;
      }
    }
    printf("Changed array\n");
    array_printer(my_first_array);
  }
  printf("Changed array\n");
  array_printer(my_first_array);
  return 0;
}

void array_printer (int * num_array){
  for(int i = 0; i < grade_array_size; i++){
    printf("[%d] = %d\n", i, num_array[i]);
  }
}


