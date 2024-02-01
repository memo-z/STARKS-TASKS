#include <stdio.h>


int isPerfect(int number) {
    int sum = 1; 

    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                
                sum += number / i;
            }
        }
    }

    
    return (sum == number);
}

int main() {
    printf("Perfect numbers between 1 and 100:\n");

    
    for (int i = 1; i <= 100; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
