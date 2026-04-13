#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newNode;
    int val;

    printf("Enter value: ");
    scanf("%d", &val);

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;

    newNode->next = head;
    head = newNode;

    printf("Inserted at beginning: %d\n", head->data);

    return 0;
}
