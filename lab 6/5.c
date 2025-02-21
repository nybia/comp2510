#include <stdio.h>

int main() {
    char input[] = "123 456 789";
    int num1, num2, num3;
    char s[100];
    sscanf(input, "%d %d %d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;
    sprintf(s, "%d", sum);
    printf("%s\n", s);
    return 0;
}
