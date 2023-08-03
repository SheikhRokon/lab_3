#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    printf("Divisors of %d are: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nNumber of divisors: %d\n", count);

    return 0;
}
