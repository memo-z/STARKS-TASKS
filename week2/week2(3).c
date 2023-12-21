#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*3- Given a number N. Print N lines that describes PUM game.*/

  int N,i=0,j=1;
  printf("please enter a number:");
  scanf("%d",&N);

while(i<N){

   while(j%4!=0){
    printf("%d  ",j);
    j++;
   }
    printf("PUM\n");
    i++;
    j++;
}


    return 0;
}
