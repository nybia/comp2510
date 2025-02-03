#include <stdio.h>

void reverse(int n){
    if (n == 0){
      return;
    }
    printf("%d", n % 10);
    reverse(n / 10);
}

int main() {
    int num;
    scanf("%d", &num);
    reverse(num);
}
