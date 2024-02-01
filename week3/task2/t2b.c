#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    unsigned long long int a = 0, b = 1, temp;
    
    for (unsigned int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    unsigned int n = 0;

    
    while (1) {
        unsigned short int result = fibonacci(n);
        
        
        if (result >= 255) {
            printf("Overflow occurred at Fibonacci(%u)\n", n - 1);
            break;
        }

        
        n++;
    }

    return 0;
}
