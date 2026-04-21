#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *front = NULL, *rear = NULL, *newNode, *temp;
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Enqueue first
    for(int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &x);

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = x;
        newNode->next = NULL;

        if(front == NULL)
            front = rear = newNode;
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    // Dequeue
    if(front == NULL) {S
        printf("Queue is empty\n");
    } else {
        temp = front;
        front = front->next;
        free(temp);

        if(front == NULL)
            rear = NULL;
    }

    // Print after dequeue
    printf("Queue after dequeue: ");
    temp = front;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
