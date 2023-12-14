#include <stdio.h>
/*Write C Program to ask the user to enter some character, then print this
character and its equivalent ascii code, also print the previous and next
characters.*/
void main(void){
	
	char x;
	printf("enter a character:");
	scanf("%c",&x);
	printf("the char you entered is:%c \n",x);
	printf("the ascii code for the char you entered is:%d \n",x);
	printf("the ascii code for the char you after the one you entered is:%d \n",x+1);
	printf("the ascii code for the char you before the one you entered is:%d \n",x-1);


}
