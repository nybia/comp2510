#include <stdio.h>

int main() {
    char word[100];
    scanf("%s", word);
    for (int i = 0; word[i]!=0; i++) {
        printf("%c%c%c", word[i], word[i], word[i]);
    }
}