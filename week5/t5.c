# include <stdio.h>

int main(){
	int x=1000;
	char *ptr=&x;
	ptr+=1;
	printf("%d %d",x,*ptr);
	
	
	
	return 0;
	
}