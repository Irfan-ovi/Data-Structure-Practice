#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newNode;
    int n, val;

    printf("How many nodes: ");
    scanf("%d", &n);

    // create list from user input
    for(int i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter value: ");
        scanf("%d", &val);

        newNode->data = val;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    // delete last node
    if(head == NULL) {
        printf("List is empty\n");
    }
    else if(head->next == NULL) {
        free(head);
        head = NULL;
    }
    else {
        temp = head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }

    // display
    printf("After deleting last node:\n");
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
