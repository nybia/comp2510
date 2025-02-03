#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[len] != '\0') {
      len++;
    }
    if (len < 2) {
      printf("String is too short\n");
    }
    else {
        for (int i = 1; i < len - 1; i++) {
            printf("%c", str[i]); // Print characters except first and last
        }
        printf("\n");
    }
    return 0;
}