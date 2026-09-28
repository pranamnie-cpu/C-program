//improt requetion libraries 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to delete node at end of circular doubly linked list
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    // If only one node
    if ((*head)->next == *head) {
        free(*head);
        *head = NULL;
        return;
    }

    // Traverse to last node
    struct Node* last = (*head)->prev;

    // Adjust links
    last->prev->next = *head;
    (*head)->prev = last->prev;

    free(last);
}

// Helper function to insert at end (for testing)
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    struct Node* last = (*head)->prev;

    last->next = newNode;
    newNode->prev = last;
    newNode->next = *head;
    (*head)->prev = newNode;
}

// Helper function to display list once around
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Before deletion:\n");
    display(head);

    deleteAtEnd(&head);

    printf("After deletion:\n");
    display(head);
    printf("Thank You");

    return 0;
}
