#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp, *prev;
    int n, pos, i, value;

    // create linked list using user input
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data for node : ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    // position delete
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(head == NULL) {
        printf("List is empty!\n");
        return 0;
    }

    // delete first node
    if(pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    }
    else {
        temp = head;

        for(i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;

            if(temp == NULL) {
                printf("Invalid position!\n");
                return 0;
            }
        }

        prev->next = temp->next;
        free(temp);
    }

    // display
    printf("Linked List after deletion:\n");
    temp = head;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 0;
}
