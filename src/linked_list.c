#include "linked_list.h"

struct node *create_list() {
  struct node *head = (struct node*) malloc(sizeof(struct node));
  return head;
}

// not correct atm
void free_list(struct node *head) {
  free(head);
}
