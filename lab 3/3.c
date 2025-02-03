#include <stdio.h>

float absolute(float num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

float my_function(float num) {
    printf("%f\n", num);
    return absolute(num);
}

int main() {
    float num;
    scanf("%f", &num);
    float returned_num = my_function(num);
    printf("the function returned %f\n", returned_num);
}