#include <stdio.h>
#include <stdlib.h>

// creating structure for linked list
struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i, num;

    struct node *head = NULL;   // starting node
    struct node *newnode, *temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &num);

        // allocate memory
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = num;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;   // first node
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;   // go to last node
            }
            temp->next = newnode;   // attach new node
        }
    }

    // Traversing the linked list
    printf("Linked List is: ");
    temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
