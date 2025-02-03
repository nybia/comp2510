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
    else if (first < second) {
        printf("%d", second);
    }
    else {
      printf("they are the same");
    }
    return 0;
}