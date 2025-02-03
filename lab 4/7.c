#include <stdio.h>
#include <stdlib.h>

int max_abs(int data[], int length) {
    if (length == 0) {
        return 0;
    }
    int max_value = data[0];
    for (int i = 1; i < length; i++) {
        if (abs(data[i]) > abs(max_value)) {
            max_value = data[i];
        }
    }
    return max_value;
}

int main() {
    int data[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 10};
    int length = 10;
    int result = max_abs(data, length);
    printf("%d\n", result);
    return 0;
}
