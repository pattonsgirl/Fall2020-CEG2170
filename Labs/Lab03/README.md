# Lab 03

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

**It is recommended to create a project folder for *each* part of this lab.**  
Folder structure:
* Create a folder named Lab03-Lastname.  
* Inside of Lab03, create two more folders (Part1 and Part2).
* You can copy the files from the Template folder into Part1 and Part2   

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to which part of  
this lab your are working on.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

This link to [Loops in C](https://www.cprogramming.com/tutorial/c/lesson3.html) is a good resource for this lab.

## Part 1 - While Loops:
Write a program that asks the user to enter a person’s age.  The program should display a message indicating  
whether the person is an infant, a child, a teenager, or an adult.  Have the program query the user on whether  
or not  they would like to enter another age (expect the user to enter “y” for yes).  Continue to run until  
the user inputs “n” for no.

The following are the conditions:  
If the person is 1 year old or less, they are an infant  
Output “Just a baby!”  
If the person is older than 1 year, but younger than 13 years, they are a child  
Output “Just a kid!”  
If the person is at least 13 years old, but less than 20 years old, they are a teenager  
Output “Get off my lawn!”  
If the person is at least 20 years old, they are an adult  
Output “You’re getting old!”  

### Sample execution:
```
Enter an age to evaluate: 10
Just a kid!
Would you like to enter another number (y/n): y
Enter an age to evaluate: 0.5
Just a baby!
Would you like to enter another number (y/n): y
Enter an age to evaluate: 32
You’re getting old!
Would you like to enter another number (y/n): y
Enter an age to evaluate: 17
Get off my lawn!
Would you like to enter another number (y/n): n
```

## Part 2 - For loops & formatting output:
If a moderately active person cuts their calorie intake by 500 calories a day, they can typically lose about  
4 pounds a month.  Write a program that lets the user enter their starting weight, then creates and displays  
a table showing what their expected weight will be at the end of each month for the next 6 months if they  
stay on this diet and provide an encouraging statement at the end.

### Sample execution:
```
Please enter you current weight: 220
At your current weight of 220 lbs, let's look at your numbers over the next 6 months:
Month		Weight
-----------------
1		216
2		212  
3		208
4		204
5		200
6		196

Wow, you could lose 24 lbs over the next 6 months!
```

## What to Submit
You created two project folders, one for each part of this lab, inside of a master folder named Lab03-LastName.  
Each folder should have at least the following:
* name_of_your_code.c

Create a .zip file of your project folder (Lab03-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.