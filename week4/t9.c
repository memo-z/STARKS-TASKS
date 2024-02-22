#include <stdio.h>

int main(){
	char str[100],c,count=0;
	int i;
	printf("enter a string:");
	fgets(str, sizeof(str), stdin);
	printf("enter a character:");
	scanf("%c",&c);
	
	for(i=0;str[i]!='\0';i++){
		
		if(str[i]==' '){
			
			str[i]=c;
			
		}
		
	}
	
	 printf("%s\n", str);
	
}