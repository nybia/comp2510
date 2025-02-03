#include <stdio.h>

void char_100() {
    char c;
    scanf("%c", &c);
    for (int i = 0; i < 100; i++) {
      printf("%c", c);
    }
}

int main() {
    char_100();
}