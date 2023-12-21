#include <stdio.h>

int main() {
  int a,b,i=0;
  printf("please enter limak and bob's weight:");
  scanf("%d %d",&a,&b);

  while(a<=b){

    a=a*3;
    b=b*2;
    i++;
  }

  printf("%d years have passed",i);

    return 0;
}
