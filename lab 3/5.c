#include <stdio.h>

double absolute(double num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

void difference(double num1, double num2) {
    if (num1 == num2) {
        printf(0);
    } else {
    printf("%lf", absolute(num1 - num2)) ;
    }
}

int main() {
    double num1, num2;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    difference(num1, num2);
}