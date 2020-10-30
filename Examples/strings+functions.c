//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void sort_list (char [5][40]);
//correct way to send as pointer
void sort_list_alt (char * [], int);

int main(void) {

  char groceries[5][40] = {
    "milk", //9
    "bananas",  //3
    "honey nut cheerios",  //8
    "apples",
    "salmon"
  };
  char *groceries_alt[] = {
    "milk", //9
    "bananas",  //3
    "honey nut cheerios",  //8
    "apples",
    "salmon"
  };
  sort_list(groceries);
  for (int i = 0; i < 5; i++){
    printf("%s\n", groceries[i]); 
  }
  sort_list_alt(groceries_alt, 5);

  char item[40] ="apples";
  for (int i = 0; i < 5; i++){
    if (strcmp(groceries[i], item) == 0)
      printf("%s is in the list\n", item);
  }

  for (int i = 0; i < 5; i++){
    printf("%s\n", groceries[i]); 
  }
  
  return 0;
}

void sort_list (char groceries[5][40]){
  printf("I am in my sort function\n");
  char temp[40];
  for (int i = 0; i < 5; i++){
    printf("Sorting: %s\n", groceries[i]);
    for (int j = i+1; j < 5; j++){
      if(strcmp(groceries[i], groceries[j]) > 0){
        //strcpy()
        printf("%s should not be before %s\n", groceries[i], groceries[j]);
        //swap
        //strcpy(dest,src);
        strcpy(temp, groceries[i]);
        strcpy(groceries[i], groceries[j]);
        strcpy(groceries[j], temp);
      }
    }
  } 
}

void sort_list_alt (char * list [], int size){
  printf("I am in my ALTERNATIVE sort function\n");
  for (int i = 0; i < size; i++){
    printf("%s\n", list[i]); 
  }
  char *temp;
  for (int i = 0; i < size; i++){
    printf("Sorting: %s\n", list[i]);
    for (int j = i+1; j < size; j++){
      if(strcmp(list[i], list[j]) > 0){
        //strcpy()
        printf("%s should not be before %s\n", list[i], list[j]);
        //swap
        temp = list[i];
        list[j] = list[i];
        list[j] = temp;
      }
    }
  } 
}