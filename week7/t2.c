#include <stdio.h>
#define ADD(x,y) ((x)+(y))
#define SUBTRACT(x,y) ((x)-(y))
#define MULTIPLY(x,y) ((x)*(y))
#define DIVIDE(x,y) ((y)!=0? ((x)/(y)):printf("Error: Division by zero\n", 0))

int main() {
    double num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    printf("Addition: %lf\n", ADD(num1, num2));
    printf("Subtraction: %lf\n", SUBTRACT(num1, num2));
    printf("Multiplication: %lf\n", MULTIPLY(num1, num2));
    printf("Division: %lf\n", DIVIDE(num1, num2));

    return 0;
}

