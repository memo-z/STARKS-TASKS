#include <stdio.h>
void calc(int x,int y,int *s,int *d, int *p);
int main(){
	
	int x,y,s=0,d=0,p=1;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	calc(x,y,&s,&d,&p);
	printf("sum=%d , diff=%d , pro=%d",s,d,p);
	
	
	
	return 0;
}

void calc(int x, int y,int *s,int *d, int *p ){
	
	*s=x+y;
	*d=x-y;
	*p=x*y;
	
}