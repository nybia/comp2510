#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "apple-pineapple";
    char *first = strchr(str, 'a'); // first a

    if (first != NULL) {
        char *second = strchr(first + 1, 'a');
        if (second != NULL) {
            printf("yes\n");
            printf("its at %td\n", second - str);
        } else {
            printf("no\n");
        }
    } else {
        printf("no\n");
    }
    return 0;
}
