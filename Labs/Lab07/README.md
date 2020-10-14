# Lab 07

## Getting Started

The name of this project / folder should be Lab07-LastName (where LastName is your last name)

Resources:

- [Arrays in C](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)

## Hangman:

Write a program to play a game of hangman. Store the word to be guessed as individual characters of an array called `word`. The player must guess the letters belonging to `word`. If the user enters a valid letter, print a message of encouragement. The program should end when the user successfully guesses the word OR after 15 guesses. Print the contents of the `word ` array at the end of the program.

_Hint_: Use an array called `guessed` to keep track of the solution so far. Initialize all elements of `guessed` to the symbol '`*`'. Each time a letter in `word` is guessed, replace the corresponding '`*`' in `guessed` with that letter.

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

These are hints on how to break down the problem above rather than code everything at once. The  
successful implementation of each goal post will get you the corresponding points.

Note that this problem does not require the use of functions - you are welcome to implement them  
(or not).

### Goal Post 1 (25%):

Create the `word` character array. Get a character from standard input (the user). Search the  
character array (string) for how many times that character appears by printing a message when the  
letter is found. Also print a message if the letter is not found.

### Goal Post 2 (25%):

Create the parallel array called `guessed`. In addition to telling the user they were correct,  
replace the `*` at the corresponding position of `word` with the correctly guessed letter.

### Goal Post 3 (25%):

Add a terminating condition using a `while` loop. The easier condition to implement is a limit of  
15 guesses and then the game should terminate and print the array `word`.

### Goal Post 4 (25%):

Add an additional terminating condition to your while loop to indicate that the word was guessed  
correctly. This condition should be based on `guessed` having no more `*` characters in it. Same  
as before, if this condition is met, the game should terminate and print the array `word`.

## Extra Credit (10%):

Add to your program the ability for a game master to enter a word for a user to guess. Your program  
should now be able to use a default (hard coded) word or a word entered by a game master. You can  
use a switch case or if statement to let the user select which mode to play the game in.

## What to Submit

Download your repl project or navigate to the folder in your file explorer.

Upload the zip files to the corresponding Pilot Dropbox. (Lab07-LastName.zip)

Make zip in Windows:

1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped).
3. A new zipped folder will appear

Make zip in Mac & Linux:

1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress.
3. A new zipped folder will appear

Upload your .zip file to Pilot.
