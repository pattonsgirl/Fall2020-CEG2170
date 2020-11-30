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
void free_list(node_t *);
void new_head(node_t *);
void new_tail(node_t *);
void populate_list(node_t *);
node_t * delete_node (node_t *, int);

int main(void) {
  //create a head for my list
  //  this is the headp that everything will rely on.
  node_t *headp = (node_t *)malloc(sizeof(node_t));
  populate_list(headp);

  new_tail(headp);
  print_list(headp);

  headp = delete_node(headp, 10);
  headp = delete_node(headp, 8);
  headp = delete_node(headp, 90);
  headp = delete_node(headp, 111);
  headp = delete_node(headp, 3);

  print_list(headp);
  
  free_list(headp);
  return 0;
}

/*
This function is going to handle a very base case:
We are only going to delete the first found instance
  of a number
*/
node_t * delete_node(node_t * headp, int del_num){
  printf("-----Deleting a Node-----\n");
  node_t * node_to_free;
  //check if what we are looking for is the first node
  // this means we have to set a new head
  if (headp->num == del_num){
    node_to_free = headp;
    headp = headp->next;
    free(node_to_free);
    //head of list has changed.  Need to return new head
    return headp;
  }

  //search the rest of the list
  node_t * current = headp;
  //since we can't go backwards, need to save the prior node
  node_t * prev = NULL;
  int found_it = 0;
  while (current->next != NULL && found_it == 0){
    //need to store the previous node
    //  cause there's no coming back!!!
    prev = current;
    current = current->next;
    //printf("value: %d\n", current->num);
    if (current->num == del_num){
      //printf("found it\n");
      found_it = 1;
    }
  }
  //if the value was not found, end early
  if (found_it == 0){
    printf("Value %d not found\n", del_num);
    return headp;
  }
  //current is the node to be deleted
  printf("Value we want: %d\n", del_num);
  printf("Value in this node: %d\n", current->num);
  //if the node was the tail, prev needs to be tail now
  if (current->next == NULL){
    prev->next = NULL;
    free(current);
  }
  //else node was somewhere in the middle
  // set node before's (prev) next to current's next
  // free current
  else {
    prev->next = current->next;
    free(current);
  }

  return headp;
}

void new_tail(node_t * headp){
  printf("----Adding New Tail Node----\n");
  // adding a node to the end
  // step 1: find the node that points to the end of the list
  node_t * temp = headp;
  while (temp->next != NULL){
    //printf("Num of address we are in now: %d\n",temp->num);
    temp = temp->next;
  }
  // temp now has address of caboose / tail
  //printf("Checking value of what is in temp: %d\n",temp->num);
  //create new node to add to end of list
  node_t * new_node = (node_t *)malloc(sizeof(node_t));
  temp->next = new_node;
  new_node->num =111;
  new_node->next = NULL;
  print_list(headp);
}

void new_head(node_t * headp){
  printf("----Adding New Head Node----\n");
  node_t *new_node = (node_t *)malloc(sizeof(node_t));
  node_t * temp = headp;
  headp = new_node;
  headp->num = 12;
  headp->next = temp;
  print_list(headp);
}

void print_list(node_t * headp){
  printf("-------Contents of list-----\n");
  node_t * temp = headp;
  while (temp != NULL){
    printf("Output: %d\n",temp->num);
    temp = temp->next;
  }
}

void free_list(node_t * headp){
  printf("-------Freeing List-----\n");
  node_t * temp = headp;
  node_t * next_to_go;
  while (temp != NULL){
    //printf("Output pre free: %d\n",temp->num);
    next_to_go = temp->next;
    free(temp);
    //printf("Output post free: %d\n",temp->num);
    temp = next_to_go;
  }
}

void populate_list(node_t * headp){
  int num_array[] = {8, 10, 16, 90, 42, 21, 8};

  int num_array_size = sizeof(num_array) / sizeof(num_array[0]);
  
  //temporarily store the head pointer.  temp will change through my initalization loop
  node_t * temp = headp;
  for (int i = 0; i < num_array_size; i++){
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
      //create new_node structure in heap.  
      node_t *new_node = (node_t *)malloc(sizeof(node_t));
      temp->next = new_node;
      temp = new_node;
    }
  }
}