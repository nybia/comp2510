#include <stdio.h>

int main(void) {
    int counter = 10;
    while (counter <= 70) {
        printf("%d ", counter);
        if (counter % 7 == 2) {
          printf("\n");
        }
        counter++;
    }
    return 0;
}