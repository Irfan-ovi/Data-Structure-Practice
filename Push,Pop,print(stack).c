#include <stdio.h>

int main() {
    int stack[5];
    int top = -1;
    int choice, data;

    while (1) {
        printf("\n1. Push stack");
        printf("\n2. Print stack");
        printf("\n3. Pop stack");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (top == 4) {
                printf("Stack Overflow");
            } else {
                printf("Enter data: ");
                scanf("%d", &data);
                top++;
                stack[top] = data;
            }
        }
        else if (choice == 2) {
            if (top == -1) {
                printf("Stack is empty");
            } else {
                printf("Stack: ");
                for (int i = 0; i <= top; i++) {
                        printf("%d--",stack[i]);
                }
            }
        }
        else if (choice == 3) {
            if (top == -1) {
                printf("Stack Underflow");
            } else {
                printf("Deleted: %d", stack[top]);
                top--;
            }
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice");
        }
    }

    return 0;
}

