#include <stdio.h>
unsigned int foo(unsigned int n, unsigned int r) {
    if (n > 0)
        return ((n % r) + foo(n / r, r));
    else
        return 0;
}

int main() {
    int n;
	n=foo(513,2);
	printf("foo(513,2)=%d",n);

    
    

    return 0;
}

