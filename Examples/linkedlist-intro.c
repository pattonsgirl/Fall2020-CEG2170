//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

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
  node_t *node3p = (node_t *)malloc(sizeof(node_t));
  node2p->next = node3p;
  node3p->num = 73;
  node3p->next = NULL;

  //printf("%d\n", node1p->next->next->num);

  node_t *temp = node1p;
  while (temp != NULL){
    printf("Address we are now: %p\n",temp);
    printf("Num of address we are in now: %d\n",temp->num);
    printf("Address we are moving to next: %p\n\n",temp->next);
    temp = temp->next;
  }

    int num_array[] = {8, 10, 16, 90, 42, 21, 8};

    int num_array_size = sizeof(num_array) / sizeof(num_array[0]);
    //create a head for my list
    //  this is the headp that everything will rely on.  
    //  If I pass headp, I can access everything in the linked list
    node_t *headp = (node_t *)malloc(sizeof(node_t));
    //temporarily store the head pointer.  temp will change through my initalization loop
    temp = headp;
    for (int i = 0; i < num_array_size; i++){
        //create new structure in heap.  
        node_t *new = (node_t *)malloc(sizeof(node_t));
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

  temp = headp;
  while (temp != NULL){
    printf("Address we are now: %p\n",temp);
    printf("Num of address we are in now: %d\n",temp->num);
    printf("Address we are moving to next: %p\n\n",temp->next);
    temp = temp->next;
  }

  
  return 0;
}
