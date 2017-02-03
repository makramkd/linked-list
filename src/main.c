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
    delete_from_list(head, 6);

    // test delete head
    delete_from_list(head, 5);

    // test delete last node
    delete_from_list(head, 8);

    return 0;
}
