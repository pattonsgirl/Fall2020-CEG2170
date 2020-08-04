# Lab 04

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

**It is recommended to create a project folder for *each* part of this lab.**
Folder structure:
* Create a folder named Lab04-Lastname.  
* Inside of Lab04, create two more folders (Part1 and Part2).
* You can copy the files from the Template folder into Part1 and Part2   

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Functions in C](https://www.cprogramming.com/tutorial/c/lesson4.html) is a good resource for this lab.

## Part 1 - Using a Function to Return a Value:
One foot equals 12 inches.  Write a function named `feet_to_inches` that accepts a number of feet  
as an argument and returns the number of inches in that many feet.  Use the function in a program  
the prompts the user to enter a number of feet then displays the number of inches in that many feet.

### Sample execution:
```
Enter the number of feet to convert to inches: 12
The number of inches in 12 feet is 144
```

## Part 2 - Using Switch Statements and Functions:
Make a basic calculator.  Your program will have 5 functions, `add_nums`, `subtract_nums`, `mult_nums`,  
`div_nums`, and `mod_nums`.  These functions should expect doubles and print the result in the function  
(your functions should not return a value).  Your `main` function will ask the user to pick a mathematical  
operation to perform, and then prompt the user for two numbers.  Use a loop to check that the user has  
entered a valid input.  Use a switch statment in your `main` to call the function for the corresponding  
character input.

### Sample execution:
```
Welcome to my calculator!
a - addition
s - subraction
m - multiplication
d - division
o - modulo
Enter the mathemical operation [a, s, m, d, o]: k
Invalid input!
Enter the mathemical operation [a, s, m, d, o]: a
Enter two numbers (put a space between the numbers) and hit Enter: 4.5 9
4.5 and 9 added together is 13.5
```

## What to Submit
You created two project folders, one for each part of this lab, inside of a master folder named Lab04-LastName.  
Each folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab04-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.