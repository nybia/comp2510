#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    for (int i = (num - 1) / 2 * 2; i > 0; i -= 2) {
        if (i % 6 == 0) {
          continue;
        }
        printf("%d ", i);
    }
    return 0;
}
