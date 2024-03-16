#include <stdio.h>

#define ARRAY_SUM(arr, size) ({ \
    int sum=0; \
    for (int i=0; i<size; ++i) { \
        sum+=arr[i]; \
    } \
    sum; \
})

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = ARRAY_SUM(arr, size);

    printf("sum of the array elements: %d\n", sum);

    return 0;
}
