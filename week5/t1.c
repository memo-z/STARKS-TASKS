#include <stdio.h>
 

int main(){
char arr[26];
char *ptr = arr;
for(int i=65; i<=90;i++){
	arr[i-65]=i;
	printf("%c\t",ptr[i-65]);
}
	
	return 0;
}