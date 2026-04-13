#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newNode;
    struct node *prev = NULL, *current, *next;
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
    // reverse linked list
    current = head;

    while(current != NULL) {
        next = current->next;   // store next
        current->next = prev;   // reverse link
        prev = current;         // move prev
        current = next;         // move current
    }

    head = prev;

    // display reversed list
    printf("Reversed List:\n");
    current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    return 0;
}
