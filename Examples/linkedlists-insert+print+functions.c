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

void print_list (node_t *);

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
  node_t * temp;

  print_list(node1p);

    int num_array[] = {8, 10, 16, 90, 42, 21, 8};
    //int * num_arrayp = (int *)calloc(7, sizeof(int));
    //num_arrayp[0] = 8;
    //num_arrayp[1] = 10;
    //, 16, 90, 42, 21, 8};

    int num_array_size = sizeof(num_array) / sizeof(num_array[0]);
    //create a head for my list
    //  this is the headp that everything will rely on.  
    //  If I pass headp, I can access everything in the linked list
    node_t *headp = (node_t *)malloc(sizeof(node_t));
    //temporarily store the head pointer.  temp will change through my initalization loop
    temp = headp;
    for (int i = 0; i < num_array_size; i++){
        //create new_node structure in heap.  
        node_t *new_node = (node_t *)malloc(sizeof(node_t));
        //save corresponding element to node temp is looking at
        temp->num = num_array[i];
        //friendly message that I did a thing
        //printf("Storing %d\n", temp->num);
        //minor magic
        //we know that the last link in a list will point to NULL
        //  I need to detect when I'm at the end of my array values
        if (i == (num_array_size-1)){
            temp->next = NULL;
        }
        //OTHERWISE, I need to fill in temp->next to point to the address we just created with new_node
        //  And then set my temp to new_node so I can rinse and repeat 
        //  (fill in the next value, new_node address, and move to the new_node node)
        else{
            temp->next = new_node;
            temp = new_node;
        }
    }

  print_list(headp);

  // always start at the start (head)
  // adding a node to the front
  node_t *new_node = (node_t *)malloc(sizeof(node_t));
  temp = headp;
  headp = new_node;
  headp->num = 12;
  headp->next = temp;

  print_list(headp);
  
  // adding a node to the end
  temp = headp;
  while (temp->next != NULL){
    printf("Num of address we are in now: %d\n",temp->num);
    temp = temp->next;
  }
  // after running this. I have address of caboose / tail
  printf("Checking value of what is in temp: %d\n",temp->num);
  new_node = (node_t *)malloc(sizeof(node_t));
  temp->next = new_node;
  new_node->num = 900;
  new_node->next = NULL;
  
  print_list(headp);

  temp = headp;
  node_t * next_to_go;
  while (temp != NULL){
    printf("Output pre free: %d\n",temp->num);
    next_to_go = temp->next;
    free(temp);
    printf("Output post free: %d\n",temp->num);
    temp = next_to_go;
  }
  
  return 0;
}

void print_list(node_t * headp){
  printf("-------Contents of list-----\n");
  node_t * temp = headp;
  while (temp != NULL){
    printf("Output: %d\n",temp->num);
    temp = temp->next;
  }
}