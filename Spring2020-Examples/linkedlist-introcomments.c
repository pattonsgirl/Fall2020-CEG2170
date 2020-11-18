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

typedef struct num_s{
    int num;
    struct num_s *next;
}num_t;

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

    //I am initially storing my numbers in an array because I was curious about populating a linked list
    //  from an array.  To fidget with more initialization, check out the extra credit
    int num_array[] = {8, 10, 16, 90, 42, 21, 8};
    //I need to get the size of my array (because I didn't want to manually set a size)
    int num_array_size = sizeof(num_array) / sizeof(num_array[0]);
    //create a head for my list
    //  this is the headp that everything will rely on.  
    //  If I pass headp, I can access everything in the linked list
    num_t *headp = (num_t *)malloc(sizeof(num_t));
    //temporarily store the head pointer.  temp will change through my initalization loop
    num_t *temp = headp;
    for (int i = 0; i < num_array_size; i++){
        //create new structure in heap.  
        num_t *new = (num_t *)malloc(sizeof(num_t));
        //save corresponding element to node temp is looking at
        temp->num = num_array[i];
        //friendly message that I did a thing
        printf("Storing %d\n", temp->num);
        //minor magic
        //we know that the last link in a list will point to NULL
        //  I need to detect when I'm at the end of my array values
        if (i == (num_array_size-1)){
            temp->next = NULL;
        }
        //OTHERWISE, I need to fill in temp->next to point to the address we just created with new
        //  And then set my temp to new so I can rinse and repeat 
        //  (fill in the next value, new address, and move to the new node)
        else{
            temp->next = new;
            temp = new;
        }
    }

    return 0;
}


