#include <stdio.h>

int reverse(int num) {
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int originalNumber = 7631;
    int reversedNumber = reverse(originalNumber);

    printf("Original Number: %d\n", originalNumber);
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
