#include <stdio.h>

void triple(int num1, int num2) {
  if (num1 > num2) {
    printf("%d\n", num1);
  } else {
    printf("%d\n", num2);
  }
}

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    triple(num1, num2);
}