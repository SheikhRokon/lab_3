#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Please enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        printf("Sum of first %d numbers: %d\n", i + 1, sum);
    }

    return 0;
}
