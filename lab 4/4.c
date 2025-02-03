#include <stdio.h>

void nonStart(char str1[], char str2[]) {
    int i = 1;
    while (str1[i] != '\0') {
        printf("%c", str1[i]);
        i++;
    }

    i = 1;
    while (str2[i] != '\0') {
        printf("%c", str2[i]);
        i++;
    }
    printf("\n");
}

int main() {
    nonStart("Hello", "There");
    nonStart("java", "code");
    nonStart("shotl", "java");
    return 0;
}
