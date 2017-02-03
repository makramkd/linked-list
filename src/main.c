#include "main.h"
#include <stdio.h>

int main( int argc, char **argv )
{
  struct node *head = create_list();
  head->val = 5;
  printf("The value of head is %i", head->val);
  free_list(head);
  return 0;
}
