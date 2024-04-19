#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct Members {
    int family_id;
    int member_id;
    char name[50];
    int money;
    struct Members *link;
} Members;

void list_members(Members *head);
void Add_members(Members **head);
void edit_family(Members *head);

#endif