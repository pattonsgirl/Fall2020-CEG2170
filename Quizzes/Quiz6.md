# Quiz 6

1. I have an integer array that I do not want changed by a function. What term can I use so that the values in my array stay constant / cannot be changed?

- const

2. Write a function prototype for a function called foo that returns void and accepts the following parameters in order:  
   Character, a double array, an address to an integer

- void foo (char, double [], int \*);

3. I have an array named list of size 10.  Write a loop that prints each value in the array to standard output.  Only write the loop, not the full program.

```
for (int i = 0; i < 10; i++){
    printf("%d ", list[i]);
}
```

4. A string is an array of characters.

- True

5. What is the output of the following code:

```
int main (void){
    double nums[] = {4.5, 7.9, 1.3};
    foo (nums);
    for (int i = 0; i < 3; i++){
        printf("%lf ", nums[i]);
    }
}

void foo (int arr[]){
    arr[1] = 9.8;
}

```

- Output is: `4.5 9.8 1.3`
