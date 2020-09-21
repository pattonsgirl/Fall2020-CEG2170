1. Provide output for the following code:
```
for (int i = 6; i <= 16; i += 2){
        printf("%d ", i);
}
```
* `6 8 10 12 14 16`
    * The loop will print 6 through 16 since the logical bounds include 16.

2. Provide output for the following code:
```
int num = 15;
while(num > 10){
    num--;
    printf("%d ", num);
}
```
* `14 13 12 11 10`
    * The loop starts with num = 15.  The first statement of the loop decrements num by 1, then prints the value - in the first iteration of the loop this would print 14.  Since the decrementing only happens after the logic check, it will print 10.

3. Fill in the logic so that the if statement will break the loop if the value of num is 5
```
for (int num = 0; num <= 10; num++){
    if(______){
        break;
    }
}
```
* `num == 5` (`num >= 5` was accepted)

4. T/F Continue moves to the next iteration of the loop.
* True.  `continue` will move to the next iteration of the loop without continuing the rest of the code in the current iteration of the loop.

5. T/F Break exits the program.
* False.  `break` will break out of the loop, but will not exit the program.  `return 0` would exit the program.
