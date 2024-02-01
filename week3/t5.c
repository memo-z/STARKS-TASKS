#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;  
    }

   
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;  
        }
    }

    return true;  
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
