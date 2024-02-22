#include <stdio.h>

int main(){
	char str[100],c,count=0;
	int i;
	printf("enter a string:");
	fgets(str, sizeof(str), stdin);
	printf("enter a character:");
	scanf("%c",&c);
	
	for(i=0;str[i]!='\0';i++){
		
		if(str[i]==c){
			
			count++;
			
		}
		
	}
	
	printf("the frequency of %c is %d",c,count);
	
}