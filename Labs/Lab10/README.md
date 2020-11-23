# Lab 10 - NOT FINALIZED

## Getting Started

The name of this project / folder should be Lab10-LastName (where LastName is your last name)

Resources:

- [Structures in C](https://www.geeksforgeeks.org/structures-c/)
- [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/)
- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

## My Gaming Helper

Video games commonly have a variety of character classes (or characters you can make). Each of those character usually have statistics about what is equipped, such as armor, weaponry, or talents. The data file will include a sampling of data collected about some characters for a game.

### Goal Post 1 (20%):

Create a structure type called `character_t` that can store:

- a string called `character`
- an integer called `armor`
- an integer called `weapon`
- an integer called `talents`
- a pointer to the next node of the same type.

Below is a list of functions you will implement. Your main function should allow a user to pick  
which function to perform - you can use a switch statement or if statements to implement the menu  
selection. You program should continue asking the user for an action to perform unless a program  
termination condition is entered (such as `q` for quit).

```
Sample menu:
Welcome to the Game Helper.
s - scan a data file
f - find character stats
a - add a character
d - remove a character
p - print characters & stats to file
q - end program
```

### Goal Post 2 (20%):

`scan_file` - Read in from [`data.txt`](./data.txt) until end of line is reached. For each line, you will be stored in a node and populated the node with the corresponding data. This should be associated with user input `s`

### Goal Post 3 (12%):

`find_character` - Print out the stats associated with a character entered by the user. If the character does not exist, it should print a message that states `Character not in data`. You may assume that no character will be repeated twice, so you do not need to continue searching one the first instance is found.

This should be associated with the user input `f`.

You may prompt the user for the character within the function OR within main and then pass the search value to the function.

### Goal Post 4 (12%):

`add_character` - Add a character and its associated stats to a node at the **end** of the linked list.

This should be associated with user input `a`.

### Goal Post 5 (12%):

`delete_character` - Deletes a character specified by the user by freeing its node. Make sure the list remains linked.

This should be associated with user input `d`.

### Goal Post 6 (12%):

`print_list` - Prints the character list to a file called `updated-data.txt`. Data should be printed in the exact same format as the original data file. This should be associated with user input `p`.

### Sample execution:

```
Sample run:
Welcome to the Game Helper.
s - scan a data file
f - find character stats
a - add a character
d - remove a character
p - print characters & stats to file
q - end program
Pick something to do: s
Data scanned.
Pick something to do: f
Enter a hostname: titan
The titan has armor score is 1220, weapon score 1234, and talent score 8.
Pick something to do: a
Enter the new character name: exo
Enter armor score: 1198
Enter weapon score: 1180
Enter talent score: 7
Pick something to do: p
Data printed to updated-data.txt
Pick something to do: q
Goodbye!

```

## What to Submit

Download your repl project or navigate to the folder in your file explorer.

Upload the zip files to the corresponding Pilot Dropbox. (Lab10-LastName.zip)

Make zip in Windows:

1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped).
3. A new zipped folder will appear

Make zip in Mac & Linux:

1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress.
3. A new zipped folder will appear

Upload your .zip file to Pilot.
