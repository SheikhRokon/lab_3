#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

int main() {
    char favoriteCar[MAX_NAME_LENGTH];
    int number, i;

    printf("Enter the name of your favorite car: ");
    scanf("%s", favoriteCar);

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++) {
        printf("%s\n", favoriteCar);
    }

    return 0;
}




