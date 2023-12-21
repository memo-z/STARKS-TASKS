#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* 1.Write a C program that ask the user to enter two numbers and print their summation,
this program should never ends until the user close the window
*/
    int num1,num2,sum;

  while(1){
    printf("enter a num:");
    scanf("%d %d",&num1,&num2);
    printf("sum=%d\n",sum= num1+ num2);
	num1=num2=sum=0;
  }




    return 0;
}
