#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char bcit_id[100];
    printf("Enter BCIT ID: ");
    scanf("%s", bcit_id);

    if (strlen(bcit_id) != 9) {
        printf("no\n");
        return 0;
    }

    if (bcit_id[0] != 'a' && bcit_id[0] != 'A') {
        printf("no\n");
        return 0;
    }

    for (int i = 1; i < 9; i++) {
        if (!isdigit(bcit_id[i])) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");

    return 0;
}
