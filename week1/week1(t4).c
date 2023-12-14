#include <stdio.h>
/*Write C program to perform addition, subtraction, multiplication and
division of two given numbers by user, then print all these results*/

int main()
{
    float num1, num2; 
    float sum, difference, product, div;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    div = num1 / num2;
    
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);
    printf("The difference of %.2f and %.2f is %.2f\n", num1, num2, difference);
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);
    printf("The div of %.2f and %.2f is %.2f\n", num1, num2, div);
    
    return 0;
}
