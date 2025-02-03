#include <stdio.h>

double mean(int data[], int length) {
    if (length == 0) {
        return 0.0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (double)sum / length;
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int length = 5;
    double result = mean(data, length);
    printf("%.2f\n", result);
    return 0;
}
