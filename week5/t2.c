#include <stdio.h>

int main(){
	
int a=5,b=6;
int *n1=&a,*n2=&b;
((*n1)++);
printf("%d\n",a);
printf("%d",((*n2)+=20));	

	
	return 0;
}