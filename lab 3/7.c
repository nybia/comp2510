#include <stdio.h>

int main() {
    double num;
    scanf("%lf", &num);
    int int_num = (int)num;
    float float_num = (float)num;
    printf("int - %d\n", int_num);
    printf("double - %lf\n", num);
    printf("float - %f\n", float_num);
}