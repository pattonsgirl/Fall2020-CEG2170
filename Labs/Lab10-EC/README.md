# Lab 10 - EXTRA CREDIT ONLY

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* header.h
* Makefile

Folder structure:
* Create a folder named Lab10-Lastname.

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Linked List Introduction](https://www.geeksforgeeks.org/linked-list-set-1-introduction/), [Singly Linked Lists](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/tutorial/), and [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/) are good resources for this lab.

## My Linked List DNS (Domain Name Server)
IPv4 internet addresses are of the form:
```
AAA.BBB.CCC.DDD
```
Where each letter represents a sectioned "subnet".  Computers also have an associated hostname.  
For fun, you can find out your computer's hostname by opening a terminal and typing `hostname`.  
You are going to write a program that with a series of functions that perform actions based on this data.  

**You may only use linked lists (dynamic memory allocation with pointers) for this extra credit opportunity**

### Brownie Points Earned (20%):
Create a structure type called `address_t` that has four integers (A, B, C, and D respectively),  
stores a hostname (string), and stores the address to the next `address_t` in a linked list. 

Below is a list of functions you will implement.  Your main function should allow a user to pick  
which function to perform - you can use a switch statement or if statements to implement the menu  
selection.  You program should continue asking the user for an action to perform unless a program  
termination condition is entered (such as `q` for quit).
```
Sample menu:
Welcome to the IPv4 lookup.  
s - scan a data file
i - find an ip address based on a hostname
a - add an ip address and hostname
p - print the dns list to a file called updated-data.txt
q - end program
```

### Brownie Points Earned (20%):
`scan_file` - Read in from [`data.txt`](./data.txt), which contains a list of no more than 25 IP addresses and  
nicknames.  The ending / terminating line in `data.txt` wil be an address of `0.0.0.0` and a hostname  
of `none`.  This should be associated with user input `s`

### Brownie Points Earned (20%):
`find_ip` - Print out the IP address based on a user given hostname.  If the hostname does not exist,  
it should print a message that states `Hostname not in data file`.  You may assume that no hostname  
will be repeated twice, so you do not need to continue searching one the first instance is found.  
This should be associated with the user input `i`.

You may prompt the user for the hostname within the function OR within main and then pass the search  
value to the function.

### Brownie Points Earned (20%):
`add_ip` - Add an address and hostname to the **end** of the linked list.  This should be associated with user input `a`.

### Brownie Points Earned (20%):
`print_list` - Prints the linked list to a file called `updated-data.txt`.  Data should be printed in the exact  
same format as the original data file.  This should be associated with user input `p`.

### Sample execution:
```
Sample menu:
Welcome to the IPv4 lookup.  
s - scan a data file
i - find an ip address based on a hostname
a - add an ip address and hostname
p - print the dns list to a file called updated-data.txt
q - end program
Pick something to do: s
Data scanned.
Pick something to do: i
Enter a hostname: bob
The hostname bob matches IP 130.110.14.1
Pick something to do: a
Enter the new IP address: 130.108.45.23
Enter the new hostname: sue
Pick something to do: p
Data printed to updated-data.txt
Pick something to do: q
Goodbye!

```

## What to Submit
You should have a folder named Lab10-LastName.  
The folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab10-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.