
#include "lab1.h"
#include <stdio.h>

static int callCount = 0; 

void printAverage(double num1, double num2) {
    double average = (num1 + num2) / 2;
    printf("Average of %.2f and %.2f is: %.2f\n", num1, num2, average);

   
    callCount++;
    printf("Number of calls: %d\n", callCount);
}
