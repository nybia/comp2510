#include <stdio.h>

int minimum(int data[][10], int n) {
    int min_value = data[n][0];
    for (int i = 1; i < 10; i++) {
        if (data[n][i] < min_value) {
            min_value = data[n][i];
        }
    }
    return min_value;
}

int main() {
    int data[5][10] = {
        {1, -2, 3, -4, 5, -6, 7, -8, 9, -10},
        {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10},
        {10, 1, 9, 2, 8, 3, 7, 6, 5, 4},
        {2, 3, 5, 7, 4, 9, 8, 6, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        printf("%d\n", minimum(data, i));
    }
    return 0;
}
