//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  char sentence [200] =("hangman");
  char sentence_unguessed [200]=("*******");
  char guess = 'n';
  for (int i=0; i < strlen(sentence); i++){
    if (guess == sentence[i]){
      sentence_unguessed [i] = sentence [i];
      printf("n is here\n");
    }
  }
  printf("phrase was %s\n", sentence);
  printf("guessed so far %s\n", sentence_unguessed);
  int which_comes_first;
  strcpy(sentence_unguessed, sentence);
  which_comes_first = strcmp(sentence, sentence_unguessed);
  printf("Return value is %d\n",which_comes_first);

  

  char groceries [3][40] = {
    "Milk",
    "bananas",
    "honey nut cheerios"
  };

  char temp[40];
  for (int i = 0; i < 3; i++){
    for (int j = i+1; j < 3; j++){
      if(strcmp(groceries[i], groceries[j]) > 0){
        //strcpy()
        printf("%s should not be before %s\n", groceries[i], groceries[j]);
        //swap
        //strcpy(dest,src);
        strcpy(temp, groceries[i]);
        strcpy(groceries[i], groceries[j]);
        strcpy(groceries[j], temp);
      }
      //printf("%d\n", temp);
    }
  } 

  for (int i = 0; i < 3; i++){
    printf("%s\n", groceries[i]); 
  }
  
  return 0;
}

