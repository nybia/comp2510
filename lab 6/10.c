#include <stdio.h>
#include <string.h>

void print_longer(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 >= len2) {
        printf("%s\n", s1);
    } else {
        printf("%s\n", s2);
    }
}

int main(void) {
    const char *str1 = "Hello";
    const char *str2 = "World!";

    print_longer(str1, str2);

    return 0;
}
