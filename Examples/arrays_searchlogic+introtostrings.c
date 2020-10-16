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
  //parallel array
  int student_ids[] = {123, 234, 456, 232, 890};
  int student_grades[]= {98, 78, 92, 87, 76};
  for (int i=0; i < 5; i++){
    //printf("Student id: %d - grade - %d\n", student_ids[i], student_grades[i]);
  }

  int search_for_me = 125;
  int counter = 0;
  for (int i = 0; i < grade_array_size; i++){
    //if the element is equal to what we are searching for do something
    if (my_first_array[i] == search_for_me){
      //printf("I'm the same!\n");
      counter++;
      //break;
    }
    //printf("haa, not found\n");
  }
  //check counter to see if 1+ instances of 90 occured
  if (counter > 0){
    printf("You know the answer!\n");
  }
  else {//counter is still 0 
    printf("I believed in you :(\n");
  }

  //2d arrays
  int twod_array [2][3] = {
    {2, 3, 4}, //row at [0][y] - y is 0 - 2
    {6, 7, 9}  //row at [1][y]
  };
  for (int rows = 0; rows < 2; rows++){
    for (int cols = 0; cols < 3; cols++){
      printf("%d  ", twod_array[rows][cols]);
    }
    printf("\n");
  }
  //searching a 2D array
  int search_2d = 3;
  for (int rows = 0; rows < 2; rows++){
    for (int cols = 0; cols < 3; cols++){
      if (search_2d == twod_array[rows][cols]){
        printf("%d WAS FOUND\n ", twod_array[rows][cols]);
      }
    }
    printf("\n");
  }

  char words[30] = {"Hippo fis"};
  char words_as_chars[20] = {'H','i','p','p','o','\0'};
  for (int i = 0; i < 9; i++){
    printf("%c", words[i]);
  }
  printf("\n%s", words_as_chars);
  scanf("%s", words);
  printf("%s", words);
  
  return 0;
}

void array_printer (int * num_array){
  //calculate size
  //printf("Inside my print array function\n");
  for(int i = 0; i < grade_array_size; i++){
    printf("[%d] = %d\n", i, num_array[i]);
  }
}


