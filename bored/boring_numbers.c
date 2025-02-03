#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int is_power(int num) {
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; i++) {
        int power = 2;
        while (pow(i, power) <= num) {
          if (pow(i, power) == num) {
            return 1;
          }
          power++;
        }
    }
    return 0;
}

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_divisible_by(int num, int div) {
    if (num % div == 0) {
        return 1;
    }
    return 0;
}

int digit_repeat_a_lot(int num) {
    
}

int main(void) {
    int limit, counter = 0, num = 100;
    scanf("%d", &limit);
    while (counter < limit) {
        num++;
        int checks = 0 + is_power(num) + is_prime(num) + is_divisible_by(num, 5);
        if (checks > 0) {
          continue;
        }
        printf("%d ", num);
        counter++;
    }
    return 0;
}