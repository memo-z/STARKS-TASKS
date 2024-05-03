#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// Internal definition for linked list-based stack
struct Stack {
    struct Node {
        int data;
        struct Node* next;
    } * top;
};

// Implementation of functions for linked list-based stack
void createStack(Stack* stack) {
    stack->top = NULL;
}

bool push(Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return false;
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
    return true;
}

bool pop(Stack* stack, int* value) {
    if (stack->top == NULL) {
        printf("Stack underflow!\n");
        return false;
    }
    struct Node* temp = stack->top;
    *value = stack->top->data;
    stack->top = stack->top->next;
    free(temp);
    return true;
}

void traverseStack(const Stack* stack) {
    printf("Stack elements: ");
    struct Node* current = stack->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void clearStack(Stack* stack) {
    struct Node* current = stack->top;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    stack->top = NULL;
    printf("Stack cleared!\n");
}
