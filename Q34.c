Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime");
        return 0;
    }

    // Check divisibility from 2 to n/2
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
