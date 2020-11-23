# Quiz 9

1. At the end of a linked list, the final node stores a pointer to what?

- NULL

2. The function \_\_\_ creates a single node in the heap of a given size.

- malloc

3. The function \_\_\_ creates a series of nodes in heap that can be accessed similarly to arrays.

- calloc

4. T/F The head of a singularly linked list can be overwritten.

- False. The head of a linked list (specifically its address) must be preserved. There is no other node that will know its address in a singly linked list.

5. Create a structure for a linked list that would hold a string, a double, and an address to the next node.

```
typedef struct node_s {
    char words [10];
    double num;
    struct node_s * next;
} node_t;
```
