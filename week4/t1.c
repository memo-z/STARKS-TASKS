#include <stdio.h>
#include <stdlib.h>
int digit_count(int n);
int main()
{int n;
    printf("please enter a number:[100 digits MAX] \n");
    scanf("%d",&n);


    if (digit_count(n)){
        printf("YES");
    }

    return 0;
}

 // start
    int digit_count(int n){
    int arr[100]={0};
    while(n>0){

        int rem=n%10;
        if(arr[rem]== 1){
            return 1;
        }
        arr[rem]=1;
        n=n/10;


    }

    return 0;

    }