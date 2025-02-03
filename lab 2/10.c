#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    for (int i = 2; i < num; i += 2) {
        if (i > 15) {
          break;
        }
        printf("%d ", i);
    }
    return 0;
}
