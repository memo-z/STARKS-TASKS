#include <stdio.h>
int fact(int *ptr);
int main(){
int n;

printf("please enter a number: ");
scanf("%d",&n);
printf("the factorial of your mumber is: %d",fact(&n));
	return 0;
}

int fact(int *ptr){
	int f=1;
	for(int i=1;i<=*ptr;i++){
		
		f*=i;
	}
	
	return f;
	
}