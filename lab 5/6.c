#include <stdio.h>

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    if (*a > *b) {
      return *a;
    } else {
      return *b;
    }
}

int main(void) {
    int m = 22, n = 11;
    printf("%d ", swap (&m, &n));
    printf("%d", m);
}

