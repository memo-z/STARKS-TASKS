#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

// Abstract Stack structure definition
typedef struct Stack Stack;

// Function declarations for stack operations
void createStack(Stack* stack);
bool push(Stack* stack, int value);
bool pop(Stack* stack, int* value);
void traverseStack(const Stack* stack);
void clearStack(Stack* stack);

#endif
