#include <stdio.h>

int main(void) {
  int counter = 0;
  while (counter <= 100) {
    int is_valid = 0;
    if (counter % 2 == 0) {
      is_valid++;
    }
    if (counter % 3 == 0) {
      is_valid++;
    }
    if (is_valid == 1) {
      printf("%d ", counter);
    }
    counter++;
  }
  return 0;
}