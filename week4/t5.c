#include <stdio.h>

int main() {
    int n, i = 0, arr[20];
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        int rem = n % 10;
        arr[i++] = rem;
        n = n / 10;
    }
    
    int len = i;
    int is_palindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }
    
    return 0;
}
