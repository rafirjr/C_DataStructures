#include "node.h"
#include <stdio.h>
#include <stdlib.h>

struct node *start;
int listCount = 0;

int main()
{
    add_at_beg(5);
    add_at_beg(3);
    add_at_beg(1);
    print_list();
    add_after(3);
    print_list();
    add_before(3);
    print_list();
    add_at_end();
    print_list();

    return 0;
}

void add_at_beg(int item) {
    struct node *ptr = (struct node *) malloc (sizeof(struct node)); //memory is allocated for pointer
    ptr->data = item;
    ptr->next = start;
    start = ptr;
    printf("Successful insertion.\n");
    listCount++;
    return;
}

void print_list() {
    struct node *temp;

    if(start == NULL) {
        printf("Linked List is empty.\n");
        return;
    }
    else
        temp = start;
    
    do {
        printf("%d\n", temp->data);
        temp = temp->next;
    } while (temp != NULL);
    
    return;
}

void add_after(int item) {
    if(start == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    struct node *temp;
    temp = start;

    for(int i = 0; i < listCount; i++) {
        if(temp->data == item) {
            ptr->next = temp->next;
            temp->next = ptr;
            printf("What int would you like to add after %d.\n", item);
            scanf("%d",&ptr->data);
            listCount++;
            return;
        }

        temp = temp->next;
    }

    printf("Position with that data entry does not exist.\n");
    return;
}

void add_before(int item) {
    if(start == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    struct node *temp, *old;
    temp = start->next;
    old = start;

    for(int i = 0; i < listCount; i++) {
        if(temp->data == item) {
            ptr->next = temp;
            old->next = ptr;
            printf("What int would you like to add before %d.\n", item);
            scanf("%d",&ptr->data);
            listCount++;
            return;
        }

        old = temp;
        temp = temp->next;
    }

    printf("Position with that data entry does not exist.\n");
    return;
}

void add_at_end() {
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    struct node *temp;
    temp = start;

    for(int i = 0; i < listCount; i++) {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;
    printf("What int would you like to add at the end of the Linked List: \n");
    scanf("%d", &ptr->data);
    listCount++;
    return;
}