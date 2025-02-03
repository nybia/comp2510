#include <stdio.h>

int main(void) {
    int first, second;
    scanf("%d", &first);
    getchar();
    scanf("%d", &second);
    getchar();
    if (first > second) {
      printf("%d", first);
    }
    else {
      printf("%d", second);
    }
    return 0;
}