#include <stdio.h>

// int main() {
//     for (int num = 24; num >= -6; num -= 6) {
//         printf("%d ", num);
//     }
//     return 0;
// }

// int main() {
//     for (int num = -10; num <= 20; num += 5) {
//         printf("%d ", num);
//     }
//     return 0;
// }

// int main() {
//     for (int num = 18; num <= 63; num += 9) {
//         printf("%d ", num);
//     }
//     return 0;
// }

int main() {
    for (int num = 18, sign = 1; num <= 63; num += 9, sign *= -1) {
        printf("%d ", num * sign);
    }
    return 0;
}