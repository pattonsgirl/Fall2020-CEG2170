#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer

/*
*
* To run:
* Use shortcut Ctrl + Shift + C to bring up a cmd terminal
* If you are using mingw 32 bit, use command: mingw32-make run
* If you are using mingw 64 bit (or have changed mingw32-make to make) 
*    use command: make run
* See Makefile for what is happening in background
*/

int main (void) {
    //we could initiatize i, our incrementer, outside of our loop
    //when we use i++ - each time we run this loop, it increments by 1
    //when we use i+=5 - each run, based on previous value, count up by 5
    //to countdown, use i-- or i-=5 to decrement in steps
    for (int i = 50; i >= 0; i-=5){
        printf("%d\t", i);
    }

    //Let's say I can buy 50 items at the store.  
    //I can keep shopping until I have 50 items.​
    //Once I have 50 items, I am done shopping.​
    //I can then program go to check out, pay for groceries, leave store​
    int item_count = 5;
    for (int i = 0; i <= item_count; i++){
        printf("You have %d items in your cart.\n", i);
    }
    //we have 50 items in order to get here
    printf("\n\nDo you want to go to the checkout?\n\n");
    char letter = scanf("%c", &letter);
    if (letter == 'y'){
        //now we can checkout each item
        for (int i = item_count; i >= 0; i--){
            printf("Checking out item %d\n", i);
        }
    }

    return 0;

}