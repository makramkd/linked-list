#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

struct node {
  struct node *next;
  int val;
};

struct node *create_list();
void free_list(struct node *head);

#endif
