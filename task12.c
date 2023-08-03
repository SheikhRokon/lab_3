#include <stdio.h>

int countDigits(int number) {
    int count = 0;

    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    int digits = countDigits(number);

    printf("Number of digits: %d\n", digits);

    return 0;
}
