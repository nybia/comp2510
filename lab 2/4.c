#include <stdio.h>

int main(void) {
    int number;
    do {
        scanf("%d", &number);
        int number_doubled = number * 2;
        printf("%d\n", number_doubled);
    } while (number > 0);
    return 0;
}