#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_STRING 50

void print_str(char [MAX_STRING], int);
//void reorder(char [][MAX_STRING], int);

int main (void){
    // initialize a string
    // ends in null terminator /0 - this can be overwritten, 
    //  that would cause problems (show initialization versus inserting with loop)
    //char letters [40] = "This is my sentence I will try to do more than 40 characters to prove my point.";
    char foo [9] = {"Unicorn"};
    //char bar [9];
    //strcpy(bar, foo);

    //compare a string
    printf("\n%s\n", foo);
    char temp;
    int i, j;
    int size = strlen(foo);
    //to advance through what is already sorted
    for (i = 0; i < size-1; i++) {
        printf("\nSort Status: %s\n", foo);
        // to compare to the next element (no self-compares)
        for (j = i+1; j < size; j++){
            //comparing characters because these get translated to numbers
            if(tolower(foo[i]) > tolower(foo[j])){
            //if((foo[i]) < (foo[j])){
            //then the left side is alphabetically preceding the right side
                temp = foo[i];
                foo[i] = foo[j];
                foo[j] = temp;
            }
            // don't need this compare
            //if(strcmp(foo[i], foo[j]) == 0)
            //then the two are equal, no swap
            //if(strcmp(foo[i], foo[j]) == 1)
            //then the right side is alphabetically preceding the left side
            //we will need a tempory slot for alphabetizing
            //we will need to swap letters if a condition is true
        }
    }
    printf("Sorted: %s", foo);


    //sort a 1D string
    
    //an array of strings (2D) - how many strings, max size of strings
    char grocery_list[3][20] = {
        "bananas", //to get to n, use grocery_list[0][2]
        "milk", 
        "flour" };
    //strcpy(grocery_list[0], bar);
    //create a reordering function
    //reorder(grocery_list, 3);
    //let's break down ordering into a simpler starter problem:
    //find a string in a list
    char check_item [] = {"milk"};
    for (int i = 0; i < 3; i++){
        //strcmp will return 0 if it's a match.  
        //check_item = abc
        //other_item = abac
        int equivalent_checker = strcmp(check_item, grocery_list[i]);
        if (equivalent_checker == 0){
            printf("\n%s is already on the list.\n", grocery_list[i]);
        }
    }

    //now let's create an alpabetized list
    char move_item[20];
    for (int i = 0; i < 3; i++){
        for (int j = i+1; j < 3; j++){
            if (strcmp(grocery_list[i], grocery_list[j]) == 1){
                strcpy(move_item, grocery_list[i]);
                strcpy(grocery_list[i],grocery_list[j]);
                strcpy(grocery_list[j], move_item);
            }
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%s ", grocery_list[i]);
    }
    print_list(grocery_list, 3);
    //search a string (1D)
    char silly_sentence [] = "A quick brown fox jumps over the.  Up here.";
    char fill_in_blank [] = {"0000000000000000000000000000000000000000000000000000"};
    int set_size = strlen(silly_sentence);
    char find_me = 'z';
    int found_counter = 0;
    for (int i = 0; i < set_size; i++){
        if(tolower(find_me) == tolower(silly_sentence[i])){
            printf("I found char %c at element %d in silly_sentence\n", find_me, i);
            fill_in_blank[i] = silly_sentence[i];
            found_counter++;
        }
        /*else {
            printf("The character %c does NOT match %c\n", find_me, silly_sentence[i]);
        }*/
    }
    //this checks how many times found
    if(found_counter > 0){
        printf("The letter was found %d times\n", found_counter);
    }
    else {//else it was found 0 times, triggers "No luck"
        printf("No luck");
    }
    printf("\n%s\n", fill_in_blank);
    print_str(fill_in_blank, strlen(fill_in_blank));

    //print_list(grocery_list, 3);

    //let's talk about 2D arrays in terms of functions


    return 0;
}

void print_str (char str[MAX_STRING], int size){
    printf("%s", str);
    return;
}

void print_list(char list[][MAX_STRING], int size){
    printf("\nFrom my function!!!\n");
    for (int i = 0; i < size; i++){
        printf("%s", list[i]);
    }
    printf("%s", list[0]);
    printf("%s", list[1]);
    printf("%s", list[2]);
    return;
}

// TODO examples
    

    //Show off parallel string relationship by associating grocery price with item name

    //compare 2 strings (string.h library) - strcmp

    //search a list

    //sort a list




