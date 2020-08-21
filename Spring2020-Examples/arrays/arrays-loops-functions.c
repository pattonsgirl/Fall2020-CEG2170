#include <stdio.h>
#include <math.h>

//pass array and size of the array
void print_array(int [], int);

int main (void){
    //initialize an array, method one:
    int num_list[5];
    //method two, where 6 is the size of the array we want to make
    //int num_list[6];
    int size;
    //get the size of an array 
    //  - take total array size and divide by size of one element 
    //  - the 0th element will always be there.
    size = sizeof(num_list) / sizeof(num_list[0]);
    //size of array is 6 - we initialized it to 6 elements
    printf("%d\n", size);

    //get sum of the array - use total to store a running counter
    int total = 0;
    for(int i = 0; i < size; i++){
        total = total + num_list[i];
    }
    printf("%d", total);

    //populate an array with a loop
    for(int i = 0; i < size; i++){
        scanf("%d", &num_list[i]);
    }
    //alternative method, use sscanf.  Note that this would get messy for a large array
    //sscanf("%d %d %d %d %d %d", &num_list[0], &num_list[1], &num_list[2], &num_list[3], &num_list[4], &num_list[5], &num_list[6]);
    
    //print an array
    for(int i = 0; i < size; i++){
        printf("%d\t", num_list[i]);
    }

    //how to pass an array to a function
    //  pass it the array name and the size of the array
    print_array(num_list, size);

    return 0;
}

//note: functions should be as generic as possible
//  that is why we shouldn't set the size in the brackets
//this function prints an array
void print_array(int a[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return;
}



