#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    
    for (i = 0; str1[i] != '\0'; i++);
    
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }
    
    str1[i + j] = '\0';
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
