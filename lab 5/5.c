#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string:\n");
    scanf("%s", str);
    str[2] = '?';
    printf("Modified string: %s\n", str);
    return 0;
}
