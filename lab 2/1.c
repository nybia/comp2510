#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    int counter = 0;
    while (counter < number) {
        printf("hi ");
        counter++;
    }
    return 0;
}