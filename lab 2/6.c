#include <stdio.h>

int main(void) {
    for (int i = 2; i < 70; i ++) {
      if (i % 15 != 0 && (i % 5 == 0 || i % 3 == 0)) {
      printf("%d ", i);
      }
    }
    return 0;
}