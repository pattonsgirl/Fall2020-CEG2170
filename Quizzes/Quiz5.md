# Quiz 5

1. To declare a file pointer, I write a statement such as:

```
double *filep;
```

- False. A file pointer is declared with:

```
FILE * filep;
```

2. What does the following statement do?

```
int *nump = &input1;
```

- Stores the address of the variable `input1` in the pointer nump

3. What will print using the following code:

```
double mynum = 10;
double *nump = &mynum;
*nump = *nump + 5;
printf("%lf", mynum);
```

- 15
- The address of mynum is stored in the pointer nump. By using `*nump` we are opening the value stored at the address for reading and editing. In the third line, 10, the value at the address stored in the pointer, has 5 added to it, then stores the result (15) back at the address stored in the pointer. Since that address is the address for the variable `mynum`, the printed value is 15.

4. What function scans input from a file?

- `fscanf`
- File needs to be opened in read mode. fscanf will need the file pointer passed to it, as well as the usual parameters (placeholders, text, and addresses of variables to plug into the placeholders)

5. What function prints output to a file?

- `fprintf`
- File need to be opened in write mode. fprintf will need the file pointer passed to it, as well as the usual parameters (placeholders, text, and variables to plug into the placeholders)

6. All arrays start at index / element 1.

- False. All arrays start at index / element 0.
