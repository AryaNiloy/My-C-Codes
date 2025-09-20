#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node {
    int data;
    Node* next;
    Node* prev;
};

// Create new node
Node* create_node(int item, Node* next, Node* prev) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Error creating node!\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;
    return new_node;
}

// Insert after a given node with target value
Node* insert_after(Node* head, int item, int target) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            Node* new_node = create_node(item, current->next, current);
            if (current->next != NULL) {
                current->next->prev = new_node;
            }
            current->next = new_node;
            return head;
        }
        current = current->next;
    }
    printf("Target node %d not found.\n", target);
    return head;
}

// Add node at beginning
Node* prepend(Node* head, int item) {
    Node* new_node = create_node(item, head, NULL);
    if (head != NULL) {
        head->prev = new_node;
    }
    return new_node;
}

// Add node at end
Node* append(Node* head, int item) {
    Node* new_node = create_node(item, NULL, NULL);
    if (head == NULL) return new_node;

    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    new_node->prev = current;
    return head;
}

// Remove a specific node
Node* remove_node(Node* head, Node* node) {
    if (node == NULL) return head;

    if (node == head) {
        head = node->next;
        if (head != NULL)
            head->prev = NULL;
        free(node);
        return head;
    }

    if (node->prev != NULL)
        node->prev->next = node->next;
    if (node->next != NULL)
        node->next->prev = node->prev;

    free(node);
    return head;
}
