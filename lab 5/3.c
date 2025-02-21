#include <stdio.h>

int main() {
    int n = 5;
    int *p = &n;
    printf("n = %d\n", *p);
    printf("n @ %p\n", p);
    return 0;
}
