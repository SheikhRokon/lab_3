#include <stdio.h>

int main() {
    int quantity, number, max, min, sum = 0;

    printf("Please enter the quantity of numbers: ");
    scanf("%d", &quantity);

    printf("Please enter %d numbers:\n", quantity);

    for (int i = 0; i < quantity; ++i) {
        scanf("%d", &number);

        if (i == 0) {
            max = min = number;
        } else {
            if (number > max) {
                max = number;
            }
            if (number < min) {
                min = number;
            }
        }

        sum += number;
    }

    double average = (double)sum / quantity;

    printf("Maximum %d\n", max);
    printf("Minimum %d\n", min);
    printf("Average is %.1f\n", average);

    return 0;
}
