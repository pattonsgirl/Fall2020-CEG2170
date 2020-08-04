#include <stdio.h>
#include <math.h>
#include <string.h>


int main (void){
    // initialize a string
    // ends in null terminator /0 - this can be overwritten, 
    //  that would cause problems (show initialization versus inserting with loop)
    char letters [40] = "This is my sentence I will try to do more than 40 characters to prove my point.";
    char foo [9] = {"Unicorn"};
    printf("%s\n", foo);
    //the old method of looping doesn't work so well for storing strings
    for (int i = 0; i < 9; i++){
        //scanf("%c", foo[i]);
        foo[i] = getchar();
    }
    //fgets and gets are good methods.  fgets is probably what you should stick to.
    //  gets can change the size of the array, which could break loops
    //fgets requires three parameters (array to store to, maximum size to read, where to read it from)
    fgets(foo, 9, stdin);
    //gets is going to auto adjust the array to fit your stuff.  
    //  It can adjust the size, size is no longer trustworthy
    //strlen(char_array_name) gets size of a 1d char array (string)
    //  You need to use strlen(foo) for loop iterations if you use gets to get user input
    printf("%d", strlen(foo));
    //similar to fgets, this truncates input to the size of the string as initialized
    scanf("%s", foo);
    //printf("\n\n--\n%s", foo);


    //an array of strings (2D) - how many strings, max size of strings
    char grocery_list[3][20] = {
        "bananas", //to get to n, use grocery_list[0][2]
        "milk", 
        "flour" };
    //numeric 2D array for comparison where 3 is how many rows and 4 is how many columns
    int num_grid [3][4] = {
            {1, 3, 4, 5}, //to get to num 4 in this array, use num_grid[0][2]
            {4, 5, 6, 7}, 
            {4, 5, 8, 9} };

    //search a string (1D)
    char silly_sentence [] = "A quick brown fox jumps over the lazy dog";
    char fill_in_blank [] = {"00000000000000000000000000000000000000000"};
    int size = strlen(silly_sentence);
    char find_me = 'u';
    for (int i = 0; i < size; i++){
        if(find_me == silly_sentence[i]){
            printf("I found char %c at element %d in silly_sentence\n", find_me, i);
            fill_in_blank[i] = silly_sentence[i];
        }
    }
    printf("\n%s\n", fill_in_blank);

    return 0;
}