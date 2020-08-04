#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_STRING 50
#define MAX_COL 5
#define MAX_NAME 20

void print_str(char []);
void print_list(char *[]);
void print_nums(int [][MAX_COL], int);
//void reorder(char [][MAX_STRING], int);

int main (void){
    // initialize a string
    // ends in null terminator /0 - this can be overwritten, 
    //  that would cause problems (show initialization versus inserting with loop)
    //char letters [40] = "This is my sentence I will try to do more than 40 characters to prove my point.";
    //char foo [9] = {"Unicorn"};
    
    //an array of strings (2D) - how many strings, max size of strings
    char *grocery_list[12] = {
        "bananas",
        "milk", 
        "flour" };

    int num_grid[3][MAX_COL] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7}
    };
    print_nums(num_grid, 3);

    print_str(grocery_list[0]);

    print_list(grocery_list);

    return 0;
}

void print_nums(int num_2D[][MAX_COL], int rows){
    for (int i = 0; i < rows; i++){
        printf("Row %d: ", i);
        for (int j = 0; j < 5; j++){
            printf("%d, ", num_2D[i][j]);
        }
        printf("\n");
    }
    return;
}

void print_str (char str[]){
    printf("%s", str);
    return;
}

void print_list(char *list[]){
    printf("\nFrom my function!!!\n");
    for (int i = 0; i < 3; i++){
        printf("%s\n", list[i]);
    }
    return;
}


