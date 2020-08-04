//#define and #include are preprocessor directives
#include <stdio.h>
#include <math.h>

//global variables vs. local variables
int hello;

//why does main return 0?
int main (void){
    //printf goes to console, fprintf goes to file
    //scanf reads input from console, fscanf reads input from file

    //double and floats can be positive or negative, good for decimal values -56.89
    //ints can be postive or negative, but only for whole numbers

    //typecasting - I can change my type by putting the type I want to convert to
    //  in parentheis in front of the value / variable
    int value = (int)78.9;
    //"%stuff" are placeholders for what type I'm going to print
    //  scans need them to to say what type to scan
    printf("%d", value);

    double dvalue = 78.345591;
    //print formatting
    // 18 slots to print my value, value is right justified.  
    //      .2 indicates how may decimal places
    printf("%18.2lf", dvalue);
    //tab then give a newline respectively
    int math = 10 % 4;
    printf("%d\t\n", math);

    //relational operators ( < <= > >= == !=)
    //logical operators
    //  && - both sides must be true
    //  || - at least one side must be true
    //  ! - changes a relational operator to be the opposite of it's actual result
    //      if it was true, becomes false.  If it was false, becomes true
    if(!(7 > 8) && !(6 < 7)){
        //nothing in here going to happen as long as 7 > 8
    }
    //if the first thing is not true, go here and see if this is true
    else if (7 < 8){

    }
    else {
        //this would happen
    }

    //difference between for and while
    //while loops keep running as long as relational statement is true
    //for loops keep running based an iterator
    //  for loops need iterator, relational operator, count change
    for (int i = 9; i > 0; i--){
        //printf("%d\n", i);
    }
    int i = 9;
    //everything but 0
    while (i > 0){ // 9, 8, 7, 6, 5, 4, 3, 2, 1, done 0 is not greater than 0, so loop is done
        //if i is up here, the value changes before the print statement sees it
        i--;
        printf("%d\n", i); //8, 7, 6, 5, 4, 3, 2, 1, 0
        if(i == 5){
            //a break here would stop the loop
            //a continue here moves to the next iteration of the loop
            //  does not execute any other code in the loop after continue is hit
            continue;
        }
        printf("Hi!\n");
        //if i-- goes here, output would be same as while loop iteration (9 through 1)
    }

    //break vs continue in loops and conditionals (if statements)
    // continues move on the next iteration
    // break breakout of the loop right then

    //functions
    //  with return values
    //  with input parameters

    //pointers
    //  what does a pointer store?
    //  how to initialize a pointer
    //  using a pointer as a return parameter

    //in class I promised not to ask questions about switch statements
    //  however, question was brought up on how break and continue work in
    //  switch statements.  This example addresses that.
   int num = 9;
    switch(num){
        case 9:
            printf("Changing value of num from 9 to 11");
            num = 11;
            //if I use break here, my switch will stop, EVEN though I changed
            //  num to 11, which should hit my default
            //  to do a true continue in a switch WITHOUT a loop, put nothing
            //  where break normally goes.  Now my default case will run and my 
            //  matching case will run
            ;
        default: 
            printf("I AM HERE");
            break;
    }

    //let's take the switch statement above (with some changes) and 
    //  toss it into a loop
    num = 11;
    while(num > 0){
        switch(num){
        case 9:
            printf("Num is now 9\n");
            //if I use ; here, the switch will still do the stuff in default
            //if I use break here, the switch will NOT do the stuff in default,
            //  just move to the next iteration of my loop
            //now that I am in a loop, I can use continue
            //  continue will move to the next iteration of my loop BUT
            //  the decrement operation to change the value doesn't happen until
            //  near the end of my loop, so it's now an infinite loop (until I 
            //  change the order of my code)
            continue;
        default: 
            printf("I AM HERE and num is %d\n", num);
            break;
        }
        //decrement num everytime we run the loop
        num--;
    }


    return 0;

}

