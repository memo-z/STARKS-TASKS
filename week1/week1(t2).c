#include <stdio.h>
//Write C program to Swap two float Numbers entered by user, print the
//numbers before and after swapping.
void main(void){
	
	int x,y,t;
	printf("enter two nums:");
	scanf("%d %d",&x,&y);
	printf("before X=%d and Y=%d \n",x,y);
	
	t=x;
	x=y;
	y=t;
	printf("after X=%d and Y=%d",x,y);

}