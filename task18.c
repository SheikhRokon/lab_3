#include <stdio.h>

int main() {
    int M, N;

    printf("Please enter the height M: ");
    scanf("%d", &M);

    printf("Please enter the length N: ");
    scanf("%d", &N);

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", (i - 1) * N + j);
        }
        printf("\n");
    }

    return 0;
}
