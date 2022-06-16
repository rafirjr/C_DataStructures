#ifndef NODE_H
#define NODE_H

#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

void add_at_beg();
void add_after(int item);
void add_before(int item);
void add_at_end();
void delete_at_beg();
void delete_at_mid();
void delete_at_end();

#endif