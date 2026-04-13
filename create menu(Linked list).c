#include<stdio.h>

int main() {
    int choice;

    while(1) {
        printf("1. Insert new node\n");
        printf("2. Insert node at beginning\n");
        printf("3. Insert node at any position\n");
        printf("4. Delete node from last\n");
        printf("5. Delete node from beginning\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("You selected: Insert new node\n");
                break;

            case 2:
                printf("You selected: Insert at beginning\n");
                break;

            case 3:
                printf("You selected: Insert at any position\n");
                break;

            case 4:
                printf("You selected: Delete from last\n");
                break;

            case 5:
                printf("You selected: Delete from beginning\n");
                break;

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
