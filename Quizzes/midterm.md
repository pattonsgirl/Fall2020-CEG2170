## Code Read: 4 (6 pts)

1. What is the output of the following code:

```
void foo ();
int num = 20;
int main (void){
    num = 12;
    foo();
    printf("%d", num);
    return 0;
}

void foo(){
    num = 8;
}
```

    - Output is `8`.  When `foo` is called, it changes the value of the global variable `num` to `8`

2. What is the output of the following:

```
int num1 = 5;
int *num1p;
num1p = &num1;
*num1p = 20;
int *num2p = num1p;
*num2p = 10;
printf("%d", num1);
```

    - It is originally initialized to 5. The value is then 20. Then it is 10.

3. Provide the output for the following code: (2pts)

```
int i = 0; int x = 0;
for(i = 1; i < 10; i = i*2){
    x++;
    printf("%d ", x);
}
printf("\nx = %d", x);
```

    - The only variable that will print is the value of x. The for loop uses the variable i, and i is multiplied by 2 every run. x increments by 1 every time the loop is run. The first time the loop runs, i = 1, then 2, then 4, then 8 (when i = 16, the relational condition will not be valid, so the loop will end). Now we know this loop runs 4 times. x starts at 0. It is incremented before printing.

```
Output:
1 2 3 4
x = 4
```

4. What is the output of the following: (2pts)

```
int main (void){
    int num1 = 5; int num2 = 3;
    int *num1p;
    num1p = &num1;
    num2 = func1(num1, num1p);
    printf("num1 is %d and num2 is %d", num1, num2);

    return 0;
}

int func1 (int a, int *bp){
    *bp = *bp * a;
    return *bp + a;
}
```

        - func1 has 'a' as an input parameter, *bp as an output parameter, and returns an integer value. func1 is sent value of num1, which is 5. When I see a used in funct1, I can replace it with 5. *bp points to the value of the address sent in main, which is the address to num1 in main. The first line of the function multiplies the value in the address (5) by 5, and then store the result in the address. So now \*bp in my function and num1 in main have value 25. The next line of the function sets the return value, which will be an integer. The return value is value at the address plus 5, which is 30.

```
Output is:
num1 is 25 and num2 is 30
```

## Written Answer: 7 (7pts)

1. My code asks the user for input. Sometimes it doesn't wait for user input and moves to the next step, which produces some odd results. What issue am I facing? How can I solve it?

   - You are likely dealing with buffer overflow. This can be solved by formatting your expected input to catch enter characters, using fflush(), or by creating a loop with getchar to clear everything until a certain character is seen: while(getchar() != "\n")

2. What is the difference between using break and continue in a loop?

   - Continue moves back to the top of the loop - remaining code in the loop is ignored. Breaks exit the loop entirely - another iteration of the loop is not performed.

3. Describe the difference between using &nump, nump, and \*nump?

```
int num = 42;
int *nump;
nump = &num;
```

    - &nump gets the address of the pointer, not the address stored in the pointer
    - nump gets the address stored in the pointer
    - *nump gets the value stored at the address stored in the pointer

4. Describe (with words) how to search through an array or list for a given value using a linear search (the only one we used in class).

   - Create a loop that will continue until the end of the array is reached. If you base it off the size of the array, make sure to start searching at element 0 and end the search at the size of the array - 1. For each element, compare the value in the element to the value being searched for. If a value is found, you can choose to keep track of instances with a counter or terminate the search once one instance is found.

5. What value does a pointer hold? Does a pointer have its own address?

   - A pointer holds an address. A pointer has it's own address in memory - it can be deleted and have no affect on other variables using the address.

6. Describe the difference(s) between using a return value of a function vs using output parameters of a function.

   - Return values of a function are used to return a value. Output parameters apply to using pointers to modify values at addresses. This was done in lab 5 to "output" a value from a function by modifying the value at the address of a variable in main. The address of the variable in main was passed to the function in the parameter list.

7. I have two relational statements in my if statement condition. I want the code in the if statement to run if either relational statements are true. What logical operator should I use?

   - || (OR) will return true if both sides are true, or if either side is true. If both sides are false, it will return false.

## Code Write: 3 (4 pts)

1. Create a scanf statement that puts values in the following variables, in order. Assume the user will put a command and then a space between each input

```
char p;
int n;
double m;
```

    - Recommended answer:

```
scanf("%c %d %lf", &c, &n, &m);
```

2. Write a for or while loop that prints all multiples of 4 (ie. 0, 4, 8, ...) from 0 to 100 where 0 and 100 are part of the range (included), not excluded.

   - Recommended answers:

```
For loop example:
    for (int i = 0; i <= 100; i+4){
        printf("%d ", i);
    }
While loop example:
    int i = 0;
    while (i <= 100){
        printf("%d ", i);
        i = i + 4;
    }
Output:
0 4 8 12 16 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80 84 88 92 96 100
```

3. Given the following array, write code that will find the average of the numbers in the array and prints the result to standard output (the terminal). (2pts)

```
double sizes [6] = {2.98, 4.53, 9.34, 3.45, 8.24};
```

    - An answer:

```
double total = 0;
for (int i = 0; i < 6; i++){
    total = total + sizes[i];
}
double average = total / 6;
printf("%lf", average);
```

## True / False: 3 (3pts)

1. I can use a while loop to perform the same behavior as a for loop.

   - Fact. Both can use iterators.

2. Evaluate if the expression will be true or false

```
1 && (30 / 10 >= 0) && (30 / 10 <= 3)
```

    - True.  `30 / 10 = 3`. 1 is true, 3 >= 0 is true, and 3 <= 3 is true.  Since they are strung together using an AND, which means all must be true, the total expression is true, or numeric 1.

3. #include statements are used to define global static values.
   - False. `#include` statements are used to include libraries and header files, such as `stdio.h`
