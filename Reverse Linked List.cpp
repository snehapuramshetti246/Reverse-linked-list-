#include <stdio.h>
#include <stdlib.h>

// Structure for linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->next != NULL) {
            printf("%d -> ", temp->data);
        } else {
            printf("%d", temp->data);
        }
        temp = temp->next;
    }
    printf("\n");
}

// Iterative function to reverse the linked list
struct Node* reverseIterative(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
    
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    struct Node* head = NULL;
    struct Node* temp = NULL;

    // Creating the linked list
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);

        struct Node* new_node = newNode(data);
        if (head == NULL) {
            head = new_node;
        } else {
            temp->next = new_node;
        }
        temp = new_node;
    }

    // Reversing the list iteratively
    head = reverseIterative(head);
    printList(head);

    return 0;
}

