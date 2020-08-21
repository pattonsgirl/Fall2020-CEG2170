#include <stdio.h>
#include <math.h>

//pass array and size of the array
void print_array(const int [], int);
void sort_array(int [], int);

int main (void){
    //initialize an array, method one:
    int size = 6;
    int num_list[] = {3, 5, 2, 1, 5, 3};

    //get sum of the array - use total to store a running counter
    int total = 0;
    for(int i = 0; i < size; i++){
        total = total + num_list[i];
    }
    printf("Total of array is: %d\n", total);

    //how to search an array
    //we know that size is 6
    //we want to search for the number 2
    int seekme = 5;
    int counter = 0;
    for (int i = 0; i < size; i++){
        //value seeking if
        if (seekme == num_list[i]){
            printf("\nFound me!\n");
            counter++;
        }
    }
    printf("%d was found %d times\n\n", seekme, counter);

    //how to pass an array to a function
    //  pass it the array name and the size of the array
    print_array(num_list, size);

    return 0;
}

//I want this to work for any array, which is why we send the size
//  and not pre-define the size in the parameters.
//  void print_array(int a[6]) - WRONG - I can now ONLY use my function with
//   an array of size 6 or have elements cut off from the original
//this function prints an array
//by putting const, I cannot make change to the values in the array in this function
//  consider it setting to read only mode
void print_array(const int a[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return;
}


//size = 6
//array will be the following values 3, 5, 2, 1, 5, 3
void sort_array(int array[], int size){
    int i, j, temp;
    //this first loop will promise that the array loops 6 times
    for(i=0; i<size; i++){
        //this first loop will promise that the array loops 6 times, BUT THE counter is based on i
        for(j=i+1; j<size; j++){
            //switch that greater than sign to make decending order
            if (array[i]>array[j]){
                //swapping of values if array[i] is less than array[j]
                //this is how the numbers are put in accending order
                //temp is used to switch the array values
                temp= array[i];
                array[i]= array[j];
                array[j]=temp;
            }
        }
    }

}


