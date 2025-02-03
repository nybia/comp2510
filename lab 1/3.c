#include <stdio.h>

int main(void) {
    char first, second;
    scanf("%c", &first);
    getchar();
    scanf("%c", &second);
    getchar();
    printf("%c\n%c", first, second);
    return 0;
}