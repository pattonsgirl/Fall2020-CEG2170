# Lab 04 - NOT FINALIZED

## Getting Started
This lab will require you to create two projects, one for each Part.  You will upload both to Pilot.

Resources:
* [C User-defined Functions](https://www.programiz.com/c-programming/c-user-defined-functions)
* [Functions in C](https://www.geeksforgeeks.org/functions-in-c/)
* [Functions](https://www.learn-c.org/en/Functions)

## Part 1 - Using a Function to Return a Value:
The name of this project / folder should be Lab04-Part1-LastName (where LastName is your last name)  

Write a program that prompts the user for a number of miles, then uses a function to convert the number of miles to kilometers.  The function should return a value to the program that is then printed for the user.  
The function should be named `miles_to_km` and take a double value (miles from the user).  It should then return the result of converting miles to kilometers.

Note: One mile equals 1.60934 kilometers.

### Sample execution:
```
Enter how many miles: 12.8
12.8 miles is equivalent to 20.5 kilometers
```
### Part 1 Rubric:
* Function `miles_to_km` - takes a double as a parameter & returns a double value after conversion: 3 pts
* Prompting the user for input & outputting the converted value: 1 pts
* Good comments, logical variable naming, and code structure: 1 pts

## Part 2 - Using Switch Statements and Functions:
The name of this project / folder should be Lab04-Part2-LastName (where LastName is your last name)

Make a basic calculator.  
Your `main` function will ask the user to pick a mathematical operation to perform, and then prompt the user for two numbers.  Use a loop to check that the user has entered a valid input.  Use a switch statment in your `main` to call the function for the corresponding character input.  
Your program will have 4 functions, `add_nums`, `subtract_nums`, `mult_nums`, `div_nums`.  These functions should expect doubles and print the result of the corresponding operation inside the function (your functions should not return a value).  

### Sample execution:
```
Welcome to my calculator!
a - addition
s - subraction
m - multiplication
d - division
Enter the mathemical operation [a, s, m, d, o]: k
Invalid input!
Enter the mathemical operation [a, s, m, d, o]: a
Enter two numbers (put a space between the numbers) and hit Enter: 4.5 9
4.5 and 9 added together is 13.5
```
### Part 2 Rubric:
* Prompts user for inputs as specified: 1 pts
* Loop to validate user selected `a, s, m, d` - continues to prompt until correct input: 1 pts
* Functions that two numbers as parameters, and print output corresponding to the operation selected: 2 pts
* Good comments, logical variable naming, and code structure: 1 pts

## What to Submit
Download your repl projects for Parts 1 & 2 or navigate to the folder in your file explorer.  

Upload the zip files to the corresponding Pilot Dropbox. (Lab04-Part1-LastName.zip & Lab04-Part2-LastName.zip)
It would be preferred if the two parts were zipped together as one submission.  Submitting each separately is acceptable.

Make zip in Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Make zip in Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.