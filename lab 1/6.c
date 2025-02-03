#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    if (number == 0){
        printf("zero\n");
    }
    else if (number > 0){
        printf("positive\n");
    }
    else{
        printf("negative\n");
    }
    return 0;
}