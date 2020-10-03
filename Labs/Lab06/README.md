# Lab 06 - NOT FINALIZED

## Getting Started

The name of this project / folder should be Lab06-LastName (where LastName is your last name)

Resources:

- [C Input & Output (including strings)](https://www.tutorialspoint.com/cprogramming/c_input_output.htm)
- [`sscanf` to parse a string](https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm)
- [Mean, Median, Mode](https://www.statisticshowto.com/probability-and-statistics/statistics-definitions/mean-median-mode/)
- [Linear Search](https://www.geeksforgeeks.org/linear-search/)
- [Sort Array in Ascending Order](https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/)
- [Size of (`sizeof`) Array in C](https://flaviocopes.com/c-array-length/)

## Part 1 - Get an Array (25%):

Write a program that requests 5 integers from the user and stores them in an array. You  
may do this with either a for loop OR by getting a string from stdin and using sscanf to store formatted input in each spot in the array.

## Part 2 - Find the Mean (25%):

Add a function to the program, called `get_mean` that determines the _mean_, which is the average of the values. The function should be passed the array and the size of the array, but use `const` so that it cannot be changed, only accessed. It should return a double, which is the calculated _mean_. The `main` function will print the value.

```
//Function prototype:
double get_mean(const int [], int);
```

## Part 3 - Search the Array (25%):

Create a function called `seek_answer` that searches the array for the answer to life, the universe, and everything - the integer `42`. If `42` is found, print `You wrote The Answer to the Great Question!`. If it is not found, print `You might not know the answer to Life, the Universe, and Everything`. Set a global variable called `search_for` to store the number to search for (`42`)

```
//Function prototype:
void search_array(const int [], int);
```

## Part 4 - Sort the Array (25%):

Create a function called `sort_array`. The array should be sorted in _descending_ order. The function should be passed the array and the size of the array. The function does not return a value; the array is changed by the function. The `main` function will print the sorted array (you may create a print array function if desired).

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
Part 3 - Search for 42:
You might not know the answer to Life, the Universe, and Everything
Part 4 - Sorted Array:
9 7 5 3 2
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
Part 3 - Search for 42:
You might not know the answer to Life, the Universe, and Everything
Part 4 - Sorted Array:
9 7 5 3 2
```

## Rubric:

Each part completed is worth 25% of the total points. For full (or partial) credit, be sure to leave very good comments to show your work / thought process.

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
