#include <stdio.h>

void my_concat(const char *a, const char *b, char* c) {
    int i = 0;
    while (a[i] != '\0') {
        c[i] = a[i];
        i++;
    }

    int j = 0;
    while (b[j] != '\0') {
        c[i + j] = b[j];
        j++;
    }

    c[i + j] = '\0';
}

int main() {
    const char *a = "Hello";
    const char *b = "World";
    char c[100];
    my_concat(a, b, c);
    printf("%s\n", c);
    return 0;
}
