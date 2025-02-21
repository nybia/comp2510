#include <stdio.h>

int main() {
    int data[3] = {11, 12, 13};
    printf("%d, %d, %d\n", data[0], data[1], data[2]);
    int *p = data;
    p++;
    *p = 60;
    printf("%d, %d, %d", data[0], data[1], data[2]);
    return 0;
}
