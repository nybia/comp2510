#include <stdio.h>

void triple(int num) {
  printf("%d\n", num * 3);
}

int main() {
    int num;
    scanf("%d", &num);
    triple(num);
}