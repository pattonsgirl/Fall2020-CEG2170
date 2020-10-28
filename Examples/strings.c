//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  char sentence [200] =("A whole bunch of text here");
  char guess;
  guess = getchar();
  printf("%c", guess);
  printf("Up next \n");
  // buffer overflow solver
  while((getchar())!='\n');

  fgets(sentence, sizeof(sentence), stdin);
  printf("%s", sentence);
  int num;
  scanf("%s %c %d", sentence, &guess, &num);

  char groceries [3][40] = {
    "milk",
    "bananas",
    "Honey Nut Cheerios"
    "turkey sandwhich"
  };
  
  return 0;
}

