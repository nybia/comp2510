#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    double log1 = log10(num1);
    double log2 = log10(num2);
    printf("%lf\n", log1 + log2);
}