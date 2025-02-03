#include <stdio.h>

void divide(double num1, double num2) {
    printf("%lf\n", num1 / num2);
}

int main() {
    double num1, num2;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    divide(num1, num2);
}