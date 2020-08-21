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
    //Let's say I can buy 50 items at the store.  
    //I can keep shopping until I have 50 items.​
    //Once I have 50 items, I am done shopping.​
    //I can then program go to check out, pay for groceries, leave store​
    //while loop version of shopping experience
    int cart_items = 0;
    int item_max = 5;
    while (item_max >= cart_items){
        //order matters.  If we increment here, our loop will look funny
        //cart_items++;
        printf("Keep shopping! You have %d items\n", cart_items);
        cart_items++;
        //each time we run, add 1 (that's what ++ is doing)  
    }

    //make a loop that does something as long as the user enters y (for yes)
    char letter = 'y';
    //while loop that keeps going until my letter is y
    while (letter == 'y'){
        printf("Run program stuff\n");
        printf("Keep going?: ");
        scanf("%c \n", &letter);
        fflush(stdin);
    }
    printf("You have entered !y.  Ending.");
    
    return 0;
}