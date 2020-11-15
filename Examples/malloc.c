//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int pedals, wheels;
} bike_t;

int main(void) {
  //malloc
  int * intp = (int*)malloc(sizeof(int));
  *intp = 42;
  printf("Number is: %d\n", *intp);
  printf("Address is: %p\n", intp);

  bike_t * bikep = (bike_t*)malloc(sizeof(bike_t));
  bikep->pedals =2;
  bikep->wheels = 3;
  printf("pedals are: %d\n", (*bikep).pedals);
  printf("wheels are: %d\n", bikep->wheels);
  printf("Address is: %p\n", bikep);
  printf("Address of bikep wheels is: %p\n", &bikep->wheels);

  int sum = 0;
  int * intarrp = (int *)calloc(5, sizeof(int));
  for(int i = 0; i < 5; ++i)
    {
        scanf("%d", intarrp + i);
        printf("%p\n", intarrp + i);
        sum += *(intarrp + i);
    }
  printf("Sum of nums entered: %d\n", sum);
  return 0;
}
