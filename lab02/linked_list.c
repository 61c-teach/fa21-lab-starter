#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"



/* returns a new node whose data is set to DATA and next is set to NULL */
Node *create_node(int data) {
    struct Node *new_node = malloc(sizeof(struct Node));
    if (new_node == NULL) {
        perror("Malloc failed\n");
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

/* Frees the list starting at HEAD */
void free_list(Node *head) {
    while (head != NULL) {
        Node *temp = head->next;
        free(head);
        head = temp;
    }
}

/* Creates a new node whose data is set to DATA and adds it to the front of the
   list pointed to by HEAD.
   This function is heavily commented for instructional purposes. Please
   never use this many comments when you are writing code. */
void add_to_front(struct Node **head, int data) {
    /* Check if the head is NULL to make sure that we do not dereference a NULL pointer
    because that would result in a segfault */
    if (head == NULL) return;
    struct Node *new_node = create_node(data);
    if (*head != NULL) {
        /* The list is not empty */
        /* The new node's next should point to the head */
        new_node->next = *head;
    }
    /* We must set HEAD using the following line in order to change the original list */
    *head = new_node;
    /* The following line would not work because it would only change our local copy of HEAD */
    /* head = new_node */
}

/* Prints out a linked list starting at HEAD */
void print_list(struct Node *head) {
    struct Node *curr;
    for (curr = head; curr != NULL; curr = curr->next) {
        printf("%d->", curr->data);
    }
    printf("NULL\n");
}

/* Iteratively reverses a linked list whose first node is HEAD */
void reverse_list(struct Node **head) {
    if (head == NULL) {
        return;
    }
    struct Node *curr = *head;
    struct Node *next = (*head)->next;
    curr->next = NULL;
    while (next != NULL) {
        struct Node *temp = next->next;
        next->next = curr;
        curr = next;
        next = temp;
    }
    *head = curr;
}

/* Creates a new node with a data field set to DATA and adds the node
   to the back of the list pointed to by HEAD */
void add_to_back(Node **head, int data) {
    if (head == NULL) {
        return;
    }
    Node *new_node = create_node(data);
    Node *prev;
    for (Node *curr = *head; curr != NULL; curr = curr->next) {
        prev = curr;
    }
    prev->next = new_node;
}
