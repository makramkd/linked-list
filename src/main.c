#include "main.h"
#include <stdio.h>

int main( int argc, char **argv )
{
    struct node *head = create_list();
    head->val = 5;

    // test insert
    add_to_list(head, 6);
    add_to_list(head, 7);
    add_to_list(head, 8);
    printf("The value of head is %i\n", head->val);
    printf("The value of head->next is %i\n", head->next->val);
    printf("The value of head->next->next is %i\n", head->next->next->val);

    // test search
    struct node *the_node = search_list(head, 6);
    printf("The search yields: %i\n", the_node->val);
    struct node *the_other_node = search_list(head, 8);
    printf("The search yields: %s\n", the_other_node == NULL ? "null" : "not null");

    // test delete middle
    struct node *after_deleted_1 = delete_from_list(head, 6);
    printf("The node after 6 is: %i\n", after_deleted_1->val);

    // test delete head
    struct node *after_deleted = delete_from_list(head, 5);
    printf("The node after 5 is: %i\n", after_deleted->val);

    // test delete last node
    struct node *other = delete_from_list(after_deleted, 8);
    printf("The node after the last is: %s\n", other == NULL ? "null" : "not null");
    return 0;
}
