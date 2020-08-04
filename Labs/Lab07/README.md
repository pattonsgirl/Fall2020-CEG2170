# Lab 07

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

Folder structure:
* Create a folder named Lab07-Lastname.

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Arrays in C](https://www.tutorialspoint.com/cprogramming/c_arrays.htm) is a good resource for this lab.

## Hangman:
Write a program to play a game of hangman.  Store the word to be guessed as individual characters of an  
array called `word`.  The player must guess the letters belonging to `word`.  If the user enters a valid  
letter, print a message of encouragement.  The program should end when the user successfully guesses the  
word OR after 15 guesses.  Print the contents of the `word ` array at the end of the program.    

*Hint*: Use an array called `guessed` to keep track of the solution so far.  Initialize all elements of  
`guessed` to the symbol '`*`'.  Each time a letter in `word` is guessed, replace the corresponding '`*`'  
in `guessed` with that letter.

### Sample execution:
```
Let's play hangman!
Enter a letter: a
The letter a is in the word!
Enter a letter: m
The letter m is in the word!
Enter a letter: r
The letter r is in the word!
The word was: arm
```
## Goal Posts:
These are hints on how to break down the problem above rather than code everything at once.  The  
successful implementation of each goal post will get you the corresponding points.  

Note that this problem does not require the use of functions - you are welcome to implement them  
(or not).

### Goal Post 1 (25%):
Create the `word` character array.  Get a character from standard input (the user).  Search the  
character array (string) for how many times that character appears by printing a message when the  
letter is found.  Also print a message if the letter is not found.

### Goal Post 2 (25%):
Create the parallel array called `guessed`.  In addition to telling the user they were correct,  
replace the `*` at the corresponding position of `word` with the correctly guessed letter.

### Goal Post 3 (25%):
Add a terminating condition using a `while` loop.  The easier condition to implement is a limit of  
15 guesses and then the game should terminate and print the array `word`.

### Goal Post 4 (25%):
Add an additional terminating condition to your while loop to indicate that the word was guessed  
correctly.  This condition should be based on `guessed` having no more `*` characters in it.  Same  
as before, if this condition is met, the game should terminate and print the array `word`.

## Extra Credit (10%):
Add to your program the ability for a game master to enter a word for a user to guess.  You program  
should now be able to use a default (hard coded) word or a word entered by a game master.  You can  
use a switch case or if statement to let the user select which mode to play the game in.

## What to Submit
You should have a folder named Lab07-LastName.  
The folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab07-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.