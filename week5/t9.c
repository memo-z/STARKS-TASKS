#include <stdio.h>

int find_first(char str[], char sub[])
{
    char *p1,*p2;
	for (int i=0; str[i]!='\0'; i++){
		p1=&str[i];
		p2=&sub[0];
		
		for(int j=0; *p2!='\0' && *p2==*p1;j++){
			p1++;
			p2++;	
		}
		
		if(*p2=='\0'){
			
			return i;
			
		}
		
	}
	
	return 0;
}

int main()
{
    char str[100], sub[100]; 
    int result; 

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring: ");
    gets(sub);

    result = find_first(str, sub);

    if (result != 0)
    {
        printf("The first occurrence of '%s' in '%s' is at index %d\n", sub, str, result);
    }
    else
    {
        printf("No occurrence of '%s' in '%s'\n", sub, str);
    }

    return 0;
}
