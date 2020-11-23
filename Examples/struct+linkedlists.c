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

typedef struct node_s {
  //data
  int num;
  //address to next node
  struct node_s * next;
} node_t;

int main(void) {
  node_t *node1p = (node_t *)malloc(sizeof(node_t));
  node1p->num = 42;
  node_t *node2p = (node_t *)malloc(sizeof(node_t));
  node1p->next = node2p;
  node2p->num = 92;
  printf("%d\n", node1p->next->num);
  

  //malloc
  int * intp = (int*)malloc(sizeof(int));
  *intp = 42;
  printf("Number is: %d\n", *intp);
  printf("Address is: %p\n", intp);

  bike_t * bikep = (bike_t*)malloc(sizeof(bike_t));
  (*bikep).pedals =2;
  bikep->wheels = 3;
  printf("pedals are: %d\n", (*bikep).pedals);
  printf("wheels are: %d\n", bikep->wheels);
  printf("Address is: %p\n", bikep);
  printf("Address of bikep wheels is: %p\n", &bikep->wheels);
  free(bikep);
  printf("pedals are: %d\n", (*bikep).pedals);
  printf("wheels are: %d\n", bikep->wheels);

  int sum = 0;
  int * intarrp = (int *)calloc(5, sizeof(int));
  intarrp[0]= 56;
  intarrp[1]= 24;
  intarrp[3]= 42;
  for(int i = 0; i < 5; ++i)
    {
        //scanf("%d", intarrp + i);
        printf("%p\n", &intarrp[i]);
        //printf("%p\n", intarrp + i);
        sum += *(intarrp + i);
    }
  intarrp = realloc(intarrp, 10);
  intarrp[9] = 90;
  printf("Sum of nums entered: %d\n", sum);
  free(intarrp);
  return 0;
}
