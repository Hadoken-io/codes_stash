#include <stdio.h>
#include <time.h>

// Function to perform some task, for example: a simple loop
void performTask() {
    long long sum = 0,s=0,p=0;
    for (long long i = 0; i < 1000000000; i++) {
        if(i%2==0)
         s = s + i;
        else
         p = p +1;

         printf("even sum is %d and odd total is %d",s,p);

    }
    printf("Sum: %lld\n", sum); // To ensure the loop isn't optimized away
}

int main() {
    // Declare variables to hold the start and end times
    clock_t start, end;
    
    // Get the current clock time before the function execution
    start = clock();
    
    // Call the function whose execution time is to be measured
    performTask();
    
    // Get the current clock time after the function execution
    end = clock();
    
    // Calculate the time taken by the function in seconds
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    
    // Print the time taken
    printf("Execution time: %f seconds\n", time_taken);
    
    return 0;
}
