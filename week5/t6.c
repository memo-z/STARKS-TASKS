#include <stdio.h>
#include <ctype.h>

int is_vowel(char c)
{
    
    c = tolower(c);
	
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

void count_vowels_consonants(char str[], int *vowel_count, int *consonant_count)
{
    *vowel_count = 0;
    *consonant_count = 0;

    for (int i=0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (is_vowel(str[i]))
            {
                (*vowel_count)++;
            }
            else
            {
                (*consonant_count)++;
            }
        }
        
    }
}

int main()
{
    char str[100];
    int vowel_count, consonant_count; 

    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
	
    
    count_vowels_consonants(str, &vowel_count, &consonant_count);

    
    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);

    return 0;
}
