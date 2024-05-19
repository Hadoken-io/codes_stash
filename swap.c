#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // Print original values
    printf("Original values - a: %d, b: %d\n", a, b);

    // Swap the values
    a = a + b;  // a now becomes 15 (5 + 10)
    b = a - b;  // b now becomes 5  (15 - 10)
    a = a - b;  // a now becomes 10 (15 - 5)

    // Print swapped values
    printf("Swapped values - a: %d, b: %d\n", a, b);

    return 0;
}
