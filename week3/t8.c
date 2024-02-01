#include <stdio.h>

float findSmallest(float num1, float num2, float num3) {
    if (num1 <= num2 && num1 <= num3) {
        return num1;
    } else if (num2 <= num1 && num2 <= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    float num1, num2, num3;

    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float smallest = findSmallest(num1, num2, num3);
    printf("The smallest number is: %.2f\n", smallest);

    return 0;
}
