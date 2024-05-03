#include "stack.h"
#include <stdio.h>

// Define the maximum stack size
#define STACK_SIZE 10

// Internal definition for array-based stack
struct Stack {
    int data[STACK_SIZE];
    int top;
};

// Implementation of functions for array-based stack
void createStack(Stack* stack) {
    stack->top = -1;
}

bool push(Stack* stack, int value) {
    if (stack->top >= STACK_SIZE - 1) {
        printf("Stack overflow!\n");
        return false;
    }
    stack->data[++(stack->top)] = value;
    return true;
}

bool pop(Stack* stack, int* value) {
    if (stack->top < 0) {
        printf("Stack underflow!\n");
        return false;
    }
    *value = stack->data[(stack->top)--];
    return true;
}

void traverseStack(const Stack* stack) {
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

void clearStack(Stack* stack) {
    stack->top = -1;
    printf("Stack cleared!\n");
}
