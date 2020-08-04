# Lab 09

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* header.h
* Makefile

Folder structure:
* Create a folder named Lab09-Lastname.

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Linked List Introduction](https://www.geeksforgeeks.org/linked-list-set-1-introduction/), [Singly Linked Lists](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/), and [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/) are good resources for this lab.

## Linked List Basics
  

### Goal Post 1 (25%):
Create a structure type called `num_t` that holds a single integer and stores the address to the  
next `num_t`  

Below is a list of functions you will implement.  Your main function should allow a user to pick  
which function to perform - you can use a switch statement or if statements to implement the menu  
selection.  You program should continue asking the user for an action to perform unless a program  
termination condition is entered (such as `q` for quit).
```
Sample menu:
Linked List Menu:  
f - find how many of a number exists
i - insert a number
p - print the numbers
q - end program
```
Initialize your linked list with values in an array.  Utilize the example we will discuss in class  
or use another method if you wish.
```
//Array example:
int num_array[] = {8, 10, 16, 90, 42, 21, 8};
```

### Goal Post 2 (15%):
`print_list` - Prints all values in the list.
```
//Function prototype:
void print_list (num_t *headp);
```

### Goal Post 3 (10%):
If `q` is selected by the user, `free` each node in the list.  `q` should also exit the program.

You may do this in a separate function OR within main.

### Goal Post 4 (25%):
`find_num` - Searches through the linked list for the user specified number and counts how many  
instances of the number were found.

You may prompt the user for the number to search for within the function OR within main and then  
pass the search value to the function.
```
//Function prototype:
void find_num (num_t *headp);
```

### Goal Post 5 (25%):
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

## Extra Credit (Up to 20%):
Implement an additional menu option of either:
```
e - enter data manually
s - scan a data file
```
Each is worth 10% of additional credit.

## What to Submit
You should have a folder named Lab09-LastName.  
The folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab09-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.