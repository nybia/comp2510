#include <stdio.h>

int main(void) {
    int number, sum = 0;
    do {
        scanf("%d", &number);
        sum += number;
        printf("%d\n", sum);
    } while (sum <= 100);
    return 0;
}