#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    int data;
    Node *next;
};

// Create a new node
Node* create_node(int item, Node *next) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next/*structure element*/ = next/*argument passed*/;
    return new_node;
}

// Insert at the beginning
Node* prepend(Node* head, int item) {
    Node* new_node = create_node(item, head)/*argument passed is head, so the next pointer of new node points to head*/;
    return new_node;
}

// Insert at the end
Node* append_node(Node* head, int item) {
    Node* new_node = create_node(item, NULL);
    if (head == NULL) {
        return new_node;
    }
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

// Insert after a specific node
Node* insert_after(Node* head, int target_data, int new_data) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == target_data) {
            Node* new_node = create_node(new_data, current->next/*it will point to the next node of the targeted node to maintain sequence*/);
            current->next = new_node;/*next pointer of tsrget node points to new node*/
            printf("Inserted %d after %d\n", new_data, target_data);
            return head;
        }
        current = current->next;
    }
    printf("Node with data %d not found.\n", target_data);
    return head;
}

// Count nodes
int count(Node* head) {
    int c = 0;
    Node* current = head;
    while (current != NULL) {
        c++;
        current = current->next;
    }
    return c;
}

// Search for a node
Node* search(Node* head, int item) {
    int pos = 1;
    Node* current = head;
    while (current != NULL) {
        if (current->data == item) {
            printf("Found %d at position %d\n", item, pos);
            return current;
        }
        current = current->next;
        pos++;
    }
    printf("%d not found\n", item);
    return NULL;
}

// Print the list
void print_list(Node* head) {
    Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    int choice, value, after_value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Prepend (Add at beginning)\n");
        printf("2. Append (Add at end)\n");
        printf("3. Insert after a node\n");
        printf("4. Print list\n");
        printf("5. Count nodes\n");
        printf("6. Search for a value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to prepend: ");
                scanf("%d", &value);
                head = prepend(head, value);
                break;

            case 2:
                printf("Enter value to append: ");
                scanf("%d", &value);
                head = append_node(head, value);
                break;

            case 3:
                printf("Enter the value after which to insert: ");
                scanf("%d", &after_value);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insert_after(head, after_value, value);
                break;

            case 4:
                print_list(head);
                break;

            case 5:
                printf("Total nodes: %d\n", count(head));
                break;

            case 6:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(head, value);
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
