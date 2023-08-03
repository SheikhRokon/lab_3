#include <stdio.h>

int main() {
    int sum = 0;
    for (int num = 63; num <= 600; num += 63) {
        sum += num;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}