#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newNode;
    int val, pos;

    // create first node
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter first value: ");
    scanf("%d", &head->data);
    head->next = NULL;

    printf("Enter value & position: ");
    scanf("%d %d", &val, &pos);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    temp = head;
    for(int i = 1; i < pos-1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    // display
    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
