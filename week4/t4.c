#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int n,sum=0,pro=1;
	printf("enter 10 numbers:");
	for(int i=0;i<10;i++){
		
		scanf("%d",&n);
		if(n%2){
			pro*=n;
			
		}else {
			
			sum+=n;
			
		}
		
	}
	
	
	printf("sum of even =%d and product of odd=%d",sum,pro);
	
}