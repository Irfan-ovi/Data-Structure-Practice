#include <stdio.h>

#define SIZE 100

int main() {
    int stack[SIZE], queue[SIZE];
    int top = -1;
    int front = 0, rear = -1;
    int n, x;

    printf("Enter number of elements in stack: ");
    scanf("%d", &n);

    // Input stack

    for(int i = 0; i < n; i++) {
        printf("Enter stack elements: ");
        scanf("%d", &x);
        stack[++top] = x;
    }


    while(top != -1) {
        queue[++rear] = stack[top--];
    }

    // Print Queue
    printf("Queue: ");
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
