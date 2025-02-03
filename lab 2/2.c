#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    for (int i = 2; i <= number; i += 2) {
      printf("%d ", i);
    }
    return 0;
}