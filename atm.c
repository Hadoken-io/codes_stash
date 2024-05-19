#include <stdio.h>

#define INITIAL_BALANCE 1000.0

int main() {
    float balance = INITIAL_BALANCE;
    float withdrawalAmount;

    printf("Welcome to the ATM!\n");
    printf("Your current balance is: $%.2f\n", balance);

    printf("Enter the amount you want to withdraw: $");
    scanf("%f", &withdrawalAmount);

    if(withdrawalAmount <= balance) {
        balance -= withdrawalAmount;
        printf("Withdrawal successful!\n");
        printf("Your new balance is: $%.2f\n", balance);
    } else {
        printf("Insufficient funds. Please try again.\n");
    }

    return 0;
}