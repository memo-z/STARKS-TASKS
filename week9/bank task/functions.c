#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int families = 0;

void list_members(Members *head) {
    if (head == NULL) {
        printf("The list is empty\n");
    } else {
        Members *temp = head;
        for (int i = 1; i <= families; i++) {
            printf("Family ID = %d\n", i);
            while (temp != NULL) {
                if (temp->family_id == i) {
                    printf("Member ID: %d\n", temp->member_id);
                    printf("Member Name: %s\n", temp->name);
                    printf("Member Money: %d\n", temp->money);
                }
                temp = temp->link;
            }
            temp = head;
        }
    }
}

void Add_members(Members **head) {
    int M_num;
    families++;
    Members *temp = *head;
    printf("Please enter the number of your family members: ");
    scanf("%d", &M_num);

    if (*head == NULL) {
        temp = malloc(sizeof(Members));
        *head = temp;
    } else {
        while (temp->link != NULL) {
            temp = temp->link;
        }
    }

    for (int i = 1; i <= M_num; i++) {
        Members *M = malloc(sizeof(Members));

        M->family_id = families;
        M->member_id = i;
        printf("Enter the name: ");
        scanf("%s", M->name);
        printf("Enter the money: ");
        scanf("%d", &M->money);
        temp->link = M;
        temp = M;
        M->link = NULL;
    }

    printf("Here is an updated list with your family included:\n");
    list_members(*head);
}

void edit_family(Members *head) {
    int choice, Fid, Mid;
    printf("Here is a list of all the families that you can edit:\n");
    list_members(head);

    if (head == NULL) {
        return;
    }

    printf("Would you like to: \n1. Delete \n2. Edit\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Please specify the family id and the member id: ");
    scanf("%d %d", &Fid, &Mid);

    Members *temp = head;
    Members *prev = NULL;

    while (temp != NULL && (temp->family_id != Fid || temp->member_id != Mid)) {
        prev = temp;
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("The member you're trying to access doesn't exist\n");
        return;
    }

    if (choice == 1) {
        if (prev == NULL) {
            head = temp->link;
        } else {
            prev->link = temp->link;
        }
        free(temp);
    } else if (choice == 2) {
        printf("Which aspect of the member do you want to change?\n1. Name\n2. Money\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter new name: ");
                scanf("%s", temp->name);
                break;
            case 2:
                printf("Enter the new amount of money: ");
                scanf("%d", &temp->money);
                break;
            default:
                printf("Enter a valid choice\n");
                break;
        }
    }
}