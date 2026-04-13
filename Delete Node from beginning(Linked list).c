#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode, *t;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // create linked list using user input
    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data for node : ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
        } else {
            t = head;
            while(t->next != NULL) {
                t = t->next;
            }
            t->next = newnode;
        }
    }

    // delete first node
    if(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    // display list
    temp = head;
    printf("Linked List after deleting first node:\n");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
