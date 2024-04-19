#include <stdio.h>
#include "functions.h"

int main() {
    int option;
    Members *head = NULL;

    while (1) {
        printf("\t\t\t**** Welcome ****\n");
        printf("Which of the following operations do you want to make:\n1. View the list of families and their data\n2. Add a family\n3. Edit or delete a family member\nEnter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                list_members(head);
                break;
            case 2:
                Add_members(&head);
                break;
            case 3:
                edit_family(head);
                break;
            default:
                printf("Please enter a valid option\n");
                break;
        }
    }

    return 0;
}
