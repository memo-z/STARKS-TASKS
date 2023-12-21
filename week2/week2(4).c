#include <stdio.h>
#include <stdlib.h>

int main()
{
 int V,F,M,T;
 printf("enter V,F,M,T:");
 scanf("%d %d %d %d",&V,&F,&M,&T);
 while(1){
    if ((V-F)<0){
            printf("F");
            break;
    }
     else
        V-=F;

    if ((V-M)<0){
    printf("M");
    break;
    }
     else
        V-=M;

    if ((V-T)<0){
    printf("T");
    break;
    }
     else
        V-=T;

 }


    return 0;
}
