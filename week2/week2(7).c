
#include <stdio.h>

int main() {
    int N, M;
    printf("enter two numbers:");
    while (1) {

        scanf("%d %d", &N, &M);

        if (N <= 0 || M <= 0) {
            break;
        }


        printf("%d", N);
        int sum = N;

        while (N < M) {
            printf(" %d", ++N);
            sum += N;
        }

        printf(" sum =%d\n", sum);
    }

    return 0;
}

