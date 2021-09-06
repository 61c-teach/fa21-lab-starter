#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int data);
void free_list(Node *head);
void add_to_front(struct Node **head, int data);
void print_list(struct Node *head);
void reverse_list(struct Node **head);
void add_to_back(Node **head, int data);

#endif // LINKED_LIST_H
