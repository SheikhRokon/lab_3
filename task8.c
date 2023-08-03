#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Please enter a number, N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 7 == 0) {
            sum += i;
        }
    }

    printf("The summation of multiples of 7 up to %d is %d\n", N, sum);

    return 0;
}
