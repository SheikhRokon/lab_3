#include <stdio.h>

int main() {
    int n, y = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sign = 1;
    for (int i = 1; i <= n; i += 2) {
        y += sign * (i * i);
        sign = -sign;
    }

    printf("The value of y is: %d\n", y);
    return 0;
}
