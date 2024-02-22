#include <stdio.h>

int main(){
	char str1[100],str2[100],i,j;
	printf("enter a string:");
	fgets(str1, sizeof(str1), stdin);
	printf("enter a string:");
	fgets(str2, sizeof(str2), stdin);
	
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++);
	if (i>j){
		
		printf("str1 > str2");
	} else if (i<j){
		printf("str1 < str2");
		
	} else{
		printf("str1 = str2");
		
	}

}