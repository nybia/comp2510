#include <stdio.h>

int main() {
    char word[10];
    scanf("%s", word);
    for (int i = 0; i < 10; i++) {
        printf("%c %d \n", word[i], i);
    }
}