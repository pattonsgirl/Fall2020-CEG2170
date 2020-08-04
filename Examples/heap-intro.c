#include <stdio.h>
#include <stdlib.h> // to get malloc, calloc, free, and realloc
#include <math.h>
#include <string.h>
#define MAX_MODEL_NAME 20
#define MAX_BIKES 10

typedef struct bike_s{
    char model[MAX_MODEL_NAME];
    int wheels;
    int pedals;
    int wheel_size;
    struct bike_s *next;
} bike_t;

typedef struct node_s{
    int num;
    struct node_s *next;
}node_t;

int main (void){   
    //node_t node1; 
    //it is very important that we never mess with node1p or whatever the "head" node is.
    //  it's the start in the chain to keep us moving
    node_t *node1p = (node_t *)malloc(sizeof(node_t));
    node1p->num = 90;
    //node1p->next = NULL;
    node_t *node2p = (node_t *)malloc(sizeof(node_t));
    node2p->num = 12;
    node1p->next = node2p;
    node_t *node3p = (node_t *)malloc(sizeof(node_t));
    node3p->num = 42;
    node2p->next = node3p;
    //all linked list end with a pointer to NULL instead of another address.
    //  We have to manually put NULL there, otherwise the random stuff at that space could give false results
    node3p->next = NULL;

    //Loop that runs as long as temp is not NULL (the caboose) and prints the value 
    //  from the structure at the address
    //  I am creating temp so that I don't risk losing my pointer to the start of the list (head)
    node_t *temp = node1p;
    while (temp != NULL){
        printf("%d\n",temp->num);
        temp = temp->next;
    }

    //using just malloc to create a single bubble (node) that will hold an int
    int *nump = (int *)malloc(sizeof(int));// int on the heap
    *nump = 8;

    //using just malloc to create a single bubble (node) that will hold a bike_t structure
    bike_t *bikep = (bike_t *)malloc(sizeof(bike_t)); // structure on the heap
    bikep->wheel_size = 9;

    int num_array [9]; // on the stack
    //using calloc to create a series of bubbles that will hold bike_t structures
    //  a calloc'ed serires can be accessed like an array
    bike_t *array_of_bikes = (bike_t *)calloc(9, sizeof(bike_t));
    array_of_bikes[0];
    printf("\n%d\n",*nump);
    free(nump);
    printf("\n%d\n",*nump);

    return 0;
}


