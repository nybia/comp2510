#include <stdio.h>
#include <string.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int array2[10];
    memcpy(array2, array1, sizeof(array1));
    printf("array2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    return 0;
}
