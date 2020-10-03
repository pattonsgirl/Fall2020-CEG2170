# Lab 06 - NOT FINALIZED

## Getting Started

The name of this project / folder should be Lab06-LastName (where LastName is your last name)

Resources:

- [C Pass Addresses & Pointers](https://www.programiz.com/c-programming/c-pointer-functions)
- [Files in C](https://www.geeksforgeeks.org/basics-file-handling-c/)

## Part 1 - Get an Array:

Write a program that requests 5 integers from the user and stores them in an array. You  
may do this with either a for loop OR by using sscanf to store formatted input in each  
spot in the array.

## Part 2 - Find the Mean:

Add a function to the program, called `get_mean` that determines the _mean_, which is the average of the values. The function should be passed the array and the size of the array, but use `const` so that it cannot be changed, only accessed. It should return a double, which is the calculated _mean_. The `main` function will print the value.

```
//Function prototype:
double get_mean(const int [], int);
```

## Part 3 - Search the Array:

Create a function called `seek_answer` that searches the array for the answer to life, the universe, and everything - the integer `42`. If `42` is found, print `You wrote The Answer to the Great Question!`. Set a global variable called `search_for` to store the number to search for (`42`)

```
//Function prototype:
void search_array(const int [], int);
```

## Part 4 - Sort the Array:

Create a function called `sort_array`. The function should be passed the array and the size of the  
array. The function does not return a value; the array is changed by the function. The `main`  
function will print the sorted array (you may create a print array function if desired).

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

Download your repl project or navigate to the folder in your file explorer.

Upload the zip files to the corresponding Pilot Dropbox. (Lab06-LastName.zip)

Make zip in Windows:

1. Choose the folder you'd like to zip.
2. Right-click the folder, point to Send to, and then click Compressed folder(zipped).
3. A new zipped folder will appear

Make zip in Mac & Linux:

1. Choose the folder you'd like to zip.
2. Ctrl + click the folder and click Compress.
3. A new zipped folder will appear

Upload your .zip file to Pilot.
