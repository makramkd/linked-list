#include "util.h"
#include "linked_list.h"

struct node *create_list() {
  struct node *head = (struct node*) mymalloc(sizeof(struct node));
  head->next = NULL;
  return head;
}

// Assumes the given list is not null
void add_to_list(struct node *head, int value) {
  struct node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = (struct node*) mymalloc(sizeof(struct node));
  temp->next->val = value;
  temp->next->next = NULL;
}

struct node *search_list(struct node *head, int value) {
  struct node *temp = head;
  while (temp != NULL && temp->val != value) {
    temp = temp->next;
  }

  return temp;
}

// Assuming that head is not null
struct node *delete_from_list(struct node *head, int value) {
  struct node *temp = head;
  struct node *before_temp = NULL;
  struct node *after_temp = temp->next;
  while (temp != NULL && temp->val != value) {
    before_temp = temp;
    temp = temp->next;
    after_temp = temp == NULL ? NULL : temp->next;
  }

  if (temp == NULL) {
    return NULL;
  } else if (after_temp == NULL) {
    // last position in the list, just remove
    // and update previous reference to NULL (rather than garbage)
    before_temp->next = NULL;
    free(temp);
    return NULL;
  } else if (before_temp == NULL) {
    // head node, just remove
    free(temp);
    return after_temp;
  } else {
    // in the middle
    // update pointers and free node to delete
    before_temp->next = after_temp;
    free(temp);
    return after_temp;
  }
}

int max_of_list(struct node *head) {
  struct node *temp = head;
  int max = temp->val;
  while (temp != NULL && temp->val > max) {
    max = temp->val;
    temp = temp->next;
  }
  return max;
}
