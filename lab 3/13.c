#include <stdio.h>
#include <stdlib.h>

long factorial(long n){
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("%d", factorial(10));
}
