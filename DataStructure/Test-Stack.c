#include <stdio.h>
#include "stack.h"

// Function to test a stack implementation
void testStack(Stack* stack) {
    createStack(stack);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    traverseStack(stack);

    int poppedValue;
    pop(stack, &poppedValue);
    printf("Popped value: %d\n", poppedValue);

    traverseStack(stack);

    clearStack(stack);

    traverseStack(stack);
}

int main() {
    // Test with array-based stack
    extern Stack arrayStack;
    testStack(&arrayStack);

    // Test with linked list-based stack
    extern Stack linkedListStack;
    testStack(&linkedListStack);

    return 0;
}
