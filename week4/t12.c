#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int arr[10];
	int i=0,Min,Max;
	
	printf("Enter 10 numbers: ");
	
	Max=Min=0;
	while(i<10){
		scanf("%d",&arr[i]);
		if(arr[i]>Max){
			Max=arr[i];
		} 
		
		if(i == 0 || arr[i]<Min){
			
			Min=arr[i];
		}
		
		i++;
		
	}
	
	printf("Max = %d and Min = %d",Max,Min);
	
}