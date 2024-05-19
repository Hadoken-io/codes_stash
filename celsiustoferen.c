#include<stdio.h>

void main() {
    char choice;
    float temp, fahrenheit, celsius;

    printf("Enter c (or C) to convert Fahrenheit to Celsius or f (or F) to convert Celsius to Fahrenheit: ");
    scanf(" %c", &choice);

    if(choice == 'c' || choice == 'C') {
        printf("Enter your temperature in Fahrenheit: ");
        scanf("%f", &temp);
        celsius = (temp - 32) * 5.0 / 9.0;
        printf("Your temperature in Celsius is: %f\n", celsius);
    } else if(choice == 'f' || choice == 'F') {
        printf("Enter your temperature in Celsius: ");
        scanf("%f", &temp);
        fahrenheit = (temp * 9.0 / 5.0) + 32;
        printf("Your temperature in Fahrenheit is: %f\n", fahrenheit);
    } else {
        printf("Invalid choice. Please enter c or f.\n");
    }
}