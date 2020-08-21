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

void list_print(num_t *);

int main (void){   
    //num_t node1; 
    /**** MANUAL INITIALIZATION ***/
    //it is very important that we never mess with node1p or whatever the "head" node is.
    //  it's the start in the chain to keep us moving
    num_t *node1p = (num_t *)malloc(sizeof(num_t));
    node1p->num = 90;
    //node1p->next = NULL;
    num_t *node2p = (num_t *)malloc(sizeof(num_t));
    node2p->num = 12;
    node1p->next = node2p;
    num_t *node3p = (num_t *)malloc(sizeof(num_t));
    node3p->num = 42;
    node2p->next = node3p;
    //all linked list end with a pointer to NULL instead of another address.
    //  We have to manually put NULL there, otherwise the random stuff at that space could give false results
    node3p->next = NULL;

    //Loop that runs as long as temp is not NULL (the caboose) and prints the value 
    //  from the structure at the address
    //  I am creating temp so that I don't risk losing my pointer to the start of the list (head)
    num_t *temp = node1p;

    while (temp != NULL){
        printf("%d\n",temp->num);
        temp = temp->next;
    }
    //if I free the pointers, and then try to use them, I will be in trouble
    //  free only after all uses are done
    //pass head pointer to function
    list_print(node1p);
    free(node1p);
    free(node2p);
    free(node3p);
    
    /******* ARRAY INITIALIZATION *******/
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
    //  note, I already initialized temp up above
    temp = headp;
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
    //print all the values in the linked list
    num_t *n = headp;
    while (n != NULL){
        printf("data is %d\n", n->num);
        n = n->next;
    }
    //pass head pointer to function
    list_print(headp);

    //inserting node to the TAIL / end of a linked list
    //Create a new node.  Store any data / info into the structure.
    num_t *new_tail = (num_t *)malloc(sizeof(num_t));
    new_tail->num = 67;
    //New node should point to NULL.
    new_tail->next = NULL;
    //Find the address of the node at the end of the list using a loop to look for NULL.
    temp = headp;
    //this loop goes until n = NULL, but we need to set detection BEFORE it goes to NULL
    while (temp != NULL){
        //printf("data is %d\n", n->num);
        if (temp->next == NULL){
            break;
        }
        temp = temp->next;
    }
    // we need n to hold the address to the tail, not NULL
    //this is better
    while (temp->next != NULL){
        temp = temp->next;
    }
    num_t *tail = temp;
    //Instead of pointing to NULL, the old end of list now needs to store the address to the 
    //  new node in it’s “next” pointer to a structure
    n->next = new_tail;
    printf("\nInserted new TAIL node!\n");
    list_print(headp);

    //let's insert at the beginning of the list
    num_t *new_head = (num_t *)malloc(sizeof(num_t));
    new_head->num = 892;
    new_head->next = headp;
    printf("\nInserted new HEAD node!\n");
    headp = new_head;
    list_print(headp);
    list_print(new_head);

    //freeing a linked list with a loop (note we initialized n above)
    n = headp;
    while (n != NULL){
        //we need to save the address to get to the next node
        num_t *next_to_go = n->next;
        //printf("Pre: Free'ing node.  Data was %d\n", n->num);
        //then free the node we are on
        free(n);
        //printf("Post: Free'ing node.  Data was %d\n", n->num);
        //then move to the next node
        n = next_to_go;
    }
    //this should print junk, because we free'd the address pointed to by 
    //  both n & headp in the loop above
    printf("Free'd node.  Data is %d\n", headp->num);
    

    return 0;
}

void list_print (num_t *headp){
    num_t *temp = headp;
    while (temp != NULL){
        printf("%d\n",temp->num);
        temp = temp->next;
    }
    return;
}

