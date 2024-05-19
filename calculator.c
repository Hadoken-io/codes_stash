#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter an expression in the format of num1 operator num2 (e.g., 5 + 3): ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}