#include <stdio.h>

int main() {
    int sum = 0;
    for (int num = 1; num <= 600; num++) {
        if ((num % 7 == 0 || num % 9 == 0) && !(num % 63 == 0)) {
            sum += num;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}