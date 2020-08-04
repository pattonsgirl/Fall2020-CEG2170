#include <stdio.h>
#include <math.h>

#define MAXCOL 5

//pass array and size of the array
void print_array(const int [], int);
void print_2D_array (const int [][MAXCOL], int, int);

int main (void){
    //initialize a 2D array, method one:
    //int num_grid [2][3] = {1, 2, 3, 4, 5, 6};
    //method two:
    int num_grid [2][3] = {
            {1, 2, 3}, 
            {4, 5, 6}
            };
    //int threeD_grid [2][3][2] = {
    //        {{1,2}, {2,3}, {4,3}}, 
    //        {{4,8}, {9,5}, {8,6}}
    //        };

    int other_num_grid [2][3] = {{1, 1, 1}, {1, 1, 1}};

    int added_array [2][3];

    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 3; col++){
            added_array[row][col] = num_grid[row][col] + other_num_grid[row][col];
        }
    }

    print_2D_array(added_array, 2, 3);
    print_2D_array(other_num_grid, 2, 3);
       
    //how to pass an array to a function
    //  pass it the array name and the size of the array
    //print_array(num_list, size);

    return 0;
}

void print_2D_array (const int a[][MAXCOL], int x, int y){
     for (int row = 0; row < x; row++){
        for (int col = 0; col < y; col++){
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    return;
}

//this function prints an array - but only a 1D array - look at the brackets
//by putting const, I cannot make change to the values in the array in this function
//  consider it setting to read only mode
void print_array(const int a[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return;
}



