#include <stdio.h>

int main(){
	int arr[]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5};
	int unique[10]={0};
	int i,val;
	
	for(i=0;i<20;i++){
		val=arr[i];
		if(unique[val]==0){
			
			unique[val]=1;
		}
		
	}
	
	for(i=0;i<10;i++){
		
		if(unique[i]==1){
			
			printf("%d",i);
		}
		
	}
	
	
}