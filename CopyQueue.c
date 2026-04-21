#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *front1 = NULL, *rear1 = NULL;
    struct node *front2 = NULL, *rear2 = NULL;
    struct node *newNode, *temp;

    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Create
    for(int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &x);

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = x;
        newNode->next = NULL;

        if(front1 == NULL)
            front1 = rear1 = newNode;
        else {
            rear1->next = newNode;
            rear1 = newNode;
        }
    }

    temp = front1;
    while(temp != NULL) {
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = temp->data;
        newNode->next = NULL;

        if(front2 == NULL)
            front2 = rear2 = newNode;
        else {
            rear2->next = newNode;
            rear2 = newNode;
        }

        temp = temp->next;
    }

    // Print
    printf("Q1: ");
    temp = front1;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Print
    printf("\nQ2: ");
    temp = front2;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
