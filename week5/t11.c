#include <stdio.h>

void fun(void *ptr, int t);

int main() {
    void *ptr;
    int t, n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("what is its type:(1.char 2.int 3.long int 4.float 5.double) ");
    scanf("%d", &t);
    ptr = &n;
    fun(ptr, t);
    
    return 0;
}

void fun(void *ptr, int t) {
    switch(t) {
        case 1:
            printf("%d", (*((char*)ptr)) * (*((char*)ptr)) * (*((char*)ptr)));
            break;
        case 2:
            printf("%d", (*((int*)ptr)) * (*((int*)ptr)) * (*((int*)ptr)));
            break;
        case 3:
            printf("%ld", (*((long int*)ptr)) * (*((long int*)ptr)) * (*((long int*)ptr)));
            break;
        case 4:
            printf("%f", (*((float*)ptr)) * (*((float*)ptr)) * (*((float*)ptr)));
            break;
        case 5:
            printf("%lf", (*((double*)ptr)) * (*((double*)ptr)) * (*((double*)ptr)));
            break;
        default:
            printf("please enter a valid choice");
    }
}
