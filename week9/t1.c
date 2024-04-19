#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void findMiddle(Node *head, int length) {
    if (head == NULL || length <= 0) {
        printf("The list is empty.\n");
        return;
    }

    Node *current = head;
    int middlePosition = length / 2 + 1;
    int currentPosition = 1;

    while (currentPosition < middlePosition) {
        current = current->next;
        currentPosition++;
    }

    if (length % 2 == 0) {
        printf("Middle elements: %d and %d\n", current->data, current->next->data);
    } else {
        printf("Middle element: %d\n", current->data);
    }
}

int main() {
    int length, data;
    Node *head = NULL;

    while (1) {
        printf("Enter the length of the linked list (enter 0 to exit): ");
        scanf("%d", &length);

        if (length == 0) {
            break;
        }

        printf("Enter the elements of the linked list:\n");
        for (int i = 0; i < length; i++) {
            scanf("%d", &data);
            insert(&head, data);
        }

        findMiddle(head, length);

        // Free the memory allocated for the linked list
        Node *temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            free(temp);
        }
    }

    return 0;
}
