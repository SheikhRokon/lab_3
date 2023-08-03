#include <stdio.h>

int countDivisors(int number) {
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    return count;
}

int isPrimeNumber(int number) {
    return (countDivisors(number) == 2);
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (isPrimeNumber(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
