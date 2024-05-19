#include <stdio.h>

int main() {
    int n, i;
    
    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Declare an array of size n
    int array[n];
    
    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // Initialize the largest element as the first element of the array
    int largest = array[0];
    
    // Traverse the array to find the largest element
    for(i = 1; i < n; i++) {
        if(array[i] > largest) {
            largest = array[i];
        }
    }
    
    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}
