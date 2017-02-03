#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node {
  struct node *next;
  int val;
};

// Creation/deletion
struct node *create_list();
void free_list(struct node *head);

// addition
void add_to_list(struct node *head, int value);

// search
struct node *search_list(struct node *head, int value);

// delete
struct node *delete_from_list(struct node *head, int value);

// max
int max_of_list(struct node *head);

#endif
