# Lab 06

## Getting Started

Download the Windows-Template or MacLinux-Template file from Pilot.  This contains settings  
for programming in VS Code.  Extract the file to a directory of your choice (such as CEG2170).  
You will now have a folder named Template that contains:
* .vscode
* code.c
* Makefile

Folder structure:
* Create a folder named Lab06-Lastname.  
* You can copy the files from the Template folder into the folder 

In Visual Studio Code, go to File, Open Folder, and open the folder corresponding to this lab.

Rename code.c if desired.  If you rename it, be sure to update the Makefile variable PROGNAME  
with the new name of your file.

To run from VS Code, use the shortcut `Ctrl + Shift + C` to open the Windows Command Terminal.  
The file path should be your project folder by default.

Type `make run` - this will compile and run your code file.  
If it fails, see the Troubleshooting Guide in [Setting Up Your Environment](https://github.com/pattonsgirl/Spring2020-CEG2170)

[Sorting Arrays](https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/), [How to Use sscanf()](https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm), [Mean, Median, and Mode](https://www.purplemath.com/modules/meanmode.htm) are good resources for this lab.

**Instructor note**: I am well aware that there are a lot of solutions to sorting arrays online  
(including in the resource provided).  Therefore, you **must** comment your code for this assignment  
to prove understanding.

## Part 1 - Get an Array:
Write a program that requests 5 integers from the user and stores them in an array.  You  
may do this with either a for loop OR by using sscanf to store formatted input in each  
spot in the array.

## Part 2 - Find the Mean:
Add a function to the program, called `get_mean` that determines the *mean*, which is the average of  
the values.  The function should be passed the array and the size of the array, but use `const` so that  
it cannot be changed, only accessed.  It should return a double, which is the calculated *mean*.  The  
`main` function will print the value.

```
//Function prototype:
double get_mean(const int [], int);
```

## Part 3 - Sort the Array:
Create a function called `sort_array`.  The function should be passed the array and the size of the  
array.  The function does not return a value; the array is changed by the function.  The `main`  
function will print the sorted array (you may create a print array function if desired).

**Instructor note**: I am well aware that there are a lot of solutions to sorting arrays online  
(including in the resource provided).  Therefore, you **must** comment your code for this assignment  
to prove understanding.

```
//Function prototype:
void sort_array(int [], int);
```

### Sample execution using sscanf:
```
Part 1 - Enter 5 integers, each separated by a space: 
5 9 2 7 3
Part 2 - Mean of Array: 
5.2
Part 3 - Sorted Array:
2 3 5 7 9
```
### Sample execution using for loop:
```
Part 1 - Enter 5 integers, hit return after each input: 
5
9
2
7
3
Part 2 - Mean of Array: 
5.2
Part 3 - Sorted Array:
2 3 5 7 9
```

## What to Submit
You created two project folders, one for each part of this lab, inside of a master folder named Lab06-LastName.  
Each folder should have at least the following:
* name_of_your_code.c  

Create a .zip file of your project folder (Lab06-LastName.zip)

Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.