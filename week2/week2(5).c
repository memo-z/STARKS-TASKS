#include <stdio.h>

int main() {
    long int n, a, b, sum = 0, Tsum = 0, i = 0;
    printf("enter n, a, b:");
    scanf("%ld %ld %ld", &n, &a, &b);

    for (; i <= n; i++) {
        sum = 0;

        long int temp = i;
        while (temp) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum >= a && sum <= b) {
            Tsum += i;
        }
    }

    printf("%ld", Tsum);

    return 0;
}
