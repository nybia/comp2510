#include <stdio.h>

int count_even(int data[][7], int n) {
    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (data[n][i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int data[5][7] = {
        {1, 1, 2, 3, 5, 8, 13},
        {2, 3, 5, 7, 11, 13, 17},
        {1, 4, 9, 16, 25, 36, 49},
        {0, 2, 0, 2, 0, 2, 0},
        {1, 1, 1, 1, 1, 1, 1}
    };
    for (int i = 0; i < 5; i++) {
        printf("%d\n", count_even(data, i));
    }
    return 0;
}
