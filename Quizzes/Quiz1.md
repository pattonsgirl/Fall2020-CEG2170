## Answers to Quiz 1

1. What is the value of i after the following lines of code?
```
i = 0;
i = 4 * 2;
i = i + 2;
```
* i = 10
    * i = 0, then i = 8, then i = 8 + 2 = 10

2. Use scanf to store a double in a variable named height.
```
double height;
scanf(__________);
```
* scanf("%lf", &height); OR "%lf", &height
    * Use lf as the placeholder to store a double.  Make sure an & is in front of the variable height to store to value there.

3. What is the name of the function that will always go first?
* main
    * main will run first

4. Programs are compiled from _____________ Hint: The code we write is also called what?
* Source code
    * We write source code, which is then compiled into a program with a compiler

5. Which of these values could be stored as an integer?  
Type just the letters corresponding to your selection(s):  
a) 4.5    b) -23     c) 3.029     d) 109      e) -1.23
* b and d (-23 and 109)
    * a, c, and e would have their originals values trancated if stored as an integer.

6. Write the output of the following code statement:
```
double height = 8.234;
int count = 45;
printf("The average height of %d is %lf", count, height);
```
* The average height of 45 is 8.234
    * Replace the corresponding values in their respective placeholders