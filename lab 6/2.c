#include <stdio.h>
#include <stdlib.h>

int main() {
    char num_in_chars_1[] = "123";
    char num_in_chars_2[] = "4567890";
    int num1 = atoi(num_in_chars_1);
    int num2 = atoi(num_in_chars_2);
    int sum = num1 + num2;
    printf("%d", sum);
    return 0;
}
