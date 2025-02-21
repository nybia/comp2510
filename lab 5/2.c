#include <stdio.h>

int main() {
    int n;
    int *p = &n;
    printf("Enter a number:");
    scanf("%d", p);
    printf("The value is: %d\n", *p);
    return 0;
}