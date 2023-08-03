#include <stdio.h>

int main() {
    const int totalNumbers = 10;
    int numbers[totalNumbers];
    int oddCount = 0;
    int oddTotal = 0;

    printf("Please enter ten numbers:\n");
    for (int i = 0; i < totalNumbers; ++i) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 != 0) {
            oddCount++;
            oddTotal += numbers[i];
        }
    }

    double average = (double)oddTotal / oddCount;

    printf("The total of the odd numbers is %d and their average is %.1f\n", oddTotal, average);

    return 0;
}
