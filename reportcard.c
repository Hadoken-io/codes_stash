#include <stdio.h>

int main() {
    int score;

    printf("Enter your exam score (out of 100): ");
    scanf("%d", &score);

    if(score >= 90 && score <= 100) {
        printf("Your grade is A\n");
    } else if(score >= 80 && score < 90) {
        printf("Your grade is B\n");
    } else if(score >= 70 && score < 80) {
        printf("Your grade is C\n");
    } else if(score >= 60 && score < 70) {
        printf("Your grade is D\n");
    } else {
        printf("Your grade is F\n");
    }

    return 0;
}