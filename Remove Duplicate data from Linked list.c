#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newNode;
    struct node *ptr, *current;
    int n, val;

    printf("How many nodes: ");
    scanf("%d", &n);

    //  create list from user input
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
    // remove duplicate

    current = head;

    while(current != NULL) {
        ptr = current;

        while(ptr->next != NULL) {
            if(ptr->next->data == current->data) {
                // skip duplicate node
                ptr->next = ptr->next->next;
            } else {
                ptr = ptr->next;
            }
        }

        current = current->next;
    }

    // display
    temp = head;
    printf("After removing duplicates:\n");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
