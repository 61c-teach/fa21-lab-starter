#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc, char **argv) {
    printf("Running tests...\n\n");

    Node *head = NULL;

    /*********** reverse_list test ***********/
    reverse_list(&head);
    for (int i = 0; i < 5; ++i) {
        add_to_front(&head, i);
        reverse_list(&head);
    }

    int expected_values[] = {3, 1, 0, 2, 4};
    Node *curr = head;
    for (int i = 0; i < 5; ++i) {
        assert(curr->data == expected_values[i]);
        curr = curr->next;
    }
    free_list(head);

    printf("Congrats! You have passed the reverse_list test!\n\n");

    /************ add_to_back test ***********/
    Node *head_2 = NULL;
    add_to_back(&head_2, 15);
    add_to_back(&head_2, 12);
    add_to_back(&head_2, 18);
    int expected_values_2[] = {15, 12, 18};
    Node *curr_2 = head_2;
    for (int i = 0; i < 3; ++i) {
        assert(curr_2->data == expected_values_2[i]);
        curr_2 = curr_2->next;
    }
    free_list(head_2);

    printf("Congrats! All of the test cases passed!\n");
    return 0;
}
