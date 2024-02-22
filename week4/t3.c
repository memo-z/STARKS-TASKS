#include <stdio.h>
#include <stdlib.h>

void main(){
	
	char arr[]={1,2,3,4,5};
	int i=0,Min,Max;
	Max=Min=arr[0];
	while(i<5){
		
		if(arr[i]>Max){
			Max=arr[i];
		} else if(arr[i]<Min){
			
			Min=arr[i];
		}
		
		i++;
		
	}
	
	printf("Max = %d and Min = %d",Max,Min);
	
}