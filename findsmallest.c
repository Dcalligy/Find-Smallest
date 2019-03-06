// findsmallest.c Modifies the find_smallest function so that it uses
// pointer arithmetic - not subscripting- to visit array elements.
#include <stdio.h>

int *find_smallest(int arr[], int n);

int main(){

    // int count = 0;
    int arr[7] = {3, 47, 52, 91, 2, 13, 49};
    int *min;
    
    min = find_smallest(arr, 7);
    printf("The smallest value in the array is: %d\n", *min);
    return 0;
}

int *find_smallest(int arr[], int n){

    // int i;
    int *p_min = &arr[0]; // set p_min to the first element in the array
    int *p;

    /* original for loop before modified 
    for(i = 1; i < n; i++){
        if(arr[i] < *p_min){
            p_min = &arr[i];
        }
    }*/

    // loop through the array starting a the second element
    for(p = &arr[1]; p < &arr[n]; p++){

        // if pointer p is less than pointer p_min 
        // then assign p_min to p
        if(*p < *p_min){

            p_min = p;
        }
    }
    return p_min;
}
