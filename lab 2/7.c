#include <stdio.h>

int main(void) {
    char letter;
    scanf("%c", &letter);
    switch (letter) {
        case 'a':
        case 'A':
            printf("A");
            break;
        case 'e':
        case 'E':
            printf("E");
            break;
        case 'i':
        case 'I':
            printf("I");
            break;
        case 'o':
        case 'O':
            printf("O");
            break;
        case 'u':
        case 'U':
            printf("U");
            break;
        default:
            printf("X");
            break;
    }
    return 0;
}
