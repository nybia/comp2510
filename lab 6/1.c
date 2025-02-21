#include <stdio.h>

int main() {
    char word[100];
    scanf("%s", word);
    for (int i = 0; word[i]!=0; i++) {
        printf("%c", (char)((int)word[i]-32));
    }
    return 0;
}