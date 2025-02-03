#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    int case_num = num % 2 == 0 ? 0 : num > 0 ? 1 : -1;

    switch (case_num) {
        case 0:
            printf("even number\n");
        break;
        case 1:
            printf("positive odd number\n");
        break;
        case -1:
            printf("negative odd number\n");
        break;
        default:
            break;
    }
    return 0;
}
