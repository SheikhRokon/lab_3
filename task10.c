#include <stdio.h>

void printDigitsRightToLeft(int number) {
    int reverse = 0;
    
    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    while (reverse > 0) {
        int digit = reverse % 10;
        printf("%d ", digit);
        reverse /= 10;
    }
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("Digits from right to left: ");
    printDigitsRightToLeft(number);
    printf("\n");

    return 0;
}
