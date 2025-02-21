#include <stdio.h>

void max_min(int a, int b, int *pmax, int *pmin){
    if (a > b) {
        *pmax = a;
        *pmin = b;
    } else {
        *pmax = b;
        *pmin = a;
    }
}

int main() {
    int m = 22, n = 11, max, min;
    max_min(m, n, &max, &min);
    printf("max = %d, min = %d\n", max, min);
    return 0;
}
