# Lab 09 - NOT FINALIZED

## Getting Started

The name of this project / folder should be Lab08-LastName (where LastName is your last name)

Resources:

- [Structures in C](https://www.geeksforgeeks.org/structures-c/)
- [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/)
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Linked List Introduction](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)
- [Singly Linked Lists](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/)

## Linked List Basics

### Goal Post 1 (20%):

Create a structure type called `num_t` that holds a single integer and stores the address to the  
next `num_t`

Below is a list of functions you will implement. Your main function should allow a user to pick  
which function to perform - you can use a switch statement or if statements to implement the menu  
selection. You program should continue asking the user for an action to perform unless a program  
termination condition is entered (such as `q` for quit).

```
Sample menu:
Linked List Menu:
f - find how many of a number exists
i - insert a number
p - print the numbers
q - end program
```

Initialize your linked list with values in an array. Utilize the example we will discuss in class  
or use another method if you wish.

```
//Array example:
int num_array[] = {8, 10, 16, 90, 42, 21, 8};
```

### Goal Post 2 (20%):

`print_list` - Prints all values in the list.

```
//Function prototype:
void print_list (num_t *headp);
```

### Goal Post 3 (20%):

If `q` is selected by the user, `free` each node in the list. `q` should also exit the program.

You may do this in a separate function OR within main.

### Goal Post 4 (20%):

`find_num` - Searches through the linked list for the user specified number and counts how many  
instances of the number were found.

You may prompt the user for the number to search for within the function OR within main and then  
pass the search value to the function.

```
//Function prototype:
void find_num (num_t *headp);
```

### Goal Post 5 (20%):

`insert_num` - Adds a user specified number to the end of the list.

You may prompt the user for the number to add within the function OR within main and then pass  
the value to the function.

```
//Function prototype:
void insert_num (num_t *headp);
```

### Sample execution:

```
Linked List Menu:
f - find how many of a number exists
i - insert a number
p - print the numbers
q - end program
Pick something to do: p
Numbers in list are: 8, 10, 16, 90, 42, 21, 8
Pick something to do: f
Enter a number: 15
15 is not in the list
Pick something to do: f
Enter a number: 8
8 was found 2 time(s).
Pick something to do: i
Enter new number: 8
8 has been added to the list
Pick something to do: f
Enter a number: 8
8 was found 3 time(s).
Pick something to do: q
List of numbers has been safely deleted from the heap.
Goodbye.
```

## Extra Credit (10%):

Implement an additional menu option of either:

```
e - enter data manually
s - scan a data file
```

- Entering data manually requirements:
  - prompts user for how many numbers they want to enter
  - populates linked list with user number input
- Scan a data file requirements:
  - populates linked list with contents from a file, such as `data.txt`

## What to Submit

Download your repl project or navigate to the folder in your file explorer.

Upload the zip files to the corresponding Pilot Dropbox. (Lab09-LastName.zip)

Make zip in Windows:

1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped).
3. A new zipped folder will appear

Make zip in Mac & Linux:

1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress.
3. A new zipped folder will appear

Upload your .zip file to Pilot.
