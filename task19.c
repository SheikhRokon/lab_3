#include <stdio.h>

int main() {
    int N;

    printf("Please enter the height N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", (i - 1) * N + j);
        }
        printf("\n");
    }

    return 0;
}
