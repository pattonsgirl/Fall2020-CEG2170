# Lab 05 - NOT FINALIZED

## Getting Started
The name of this project / folder should be Lab05-LastName (where LastName is your last name)  

Resources:
* [C Pass Addresses & Pointers](https://www.programiz.com/c-programming/c-pointer-functions)
* [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/)

## Reading from Files & Playing with Pointers:
Lab 04 had you make a basic calculator.  This lab is going to add some additional feature requirements.  
Feel free to reuse your code and make modifications or start from scratch.  

Your program will have 4 functions, `add_nums`, `subtract_nums`, `mult_nums`, `div_nums`.  
These functions should expect **two input parameters of type double and one output parameter of type double**.  Your functions should still have a return type of void.

Your `main` needs to open a file called `input.txt` (contents for `input.txt` are detailed below).  
* You should read one line at a time and perform corresponding operations until you run out of lines.  
* For grading, we can test your code on a different input file, so it is important to not limit your loop to only the version of `input.txt` provided in this lab .
    * Your loop should look for EOF, not terminate after so many lines are read.

Your `main` can still use a switch statement to determine which function to call based on the value of the first character of the line.  You can assume only valid input will exist in `input.txt`, so you do not need to check for improper input.  Using the output parameter passed to each function, you should print the result of the operation to the terminal AND print the result of the operation to a file called `output.txt`

### input.txt:
```
a 3 7
s 9 3
m 3 4
d 90 9
o 9 4 
```

### Sample Program Execution & Contents of output.txt:
```
10
6
12
10
1
```

## What to Submit
Download your repl project or navigate to the folder in your file explorer.  

Upload the zip files to the corresponding Pilot Dropbox. (Lab05-LastName.zip)

Make zip in Windows:
1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped). 
3. A new zipped folder will appear 
 
Make zip in Mac & Linux:
1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress. 
3. A new zipped folder will appear 

Upload your .zip file to Pilot.