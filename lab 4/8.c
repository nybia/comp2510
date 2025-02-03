#include <stdio.h>

int in_between(int data[], int length, int val_1, int val_2) {
    int count = 0;
    if (val_1 > val_2) {
        int temp = val_1;
        val_1 = val_2;
        val_2 = temp;
    }
    for (int i = 0; i < length; i++) {
        if (data[i] >= val_1 && data[i] <= val_2) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int length = 10;
    int result = in_between(data, length, 5, 15);
    printf("%d\n", result);
    return 0;
}
