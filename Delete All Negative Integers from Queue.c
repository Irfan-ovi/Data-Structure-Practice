#include <stdio.h>

#define SIZE 100

int main() {
    int queue[SIZE], newQueue[SIZE];
    int front = 0, rear = -1;
    int newFront = 0, newRear = -1;
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);



    for(int i = 0; i < n; i++) {
        printf("Enter elements : ");
        scanf("%d", &x);
        queue[++rear] = x;
    }


    for(int i = front; i <= rear; i++) {
        if(queue[i] >= 0) {
            newQueue[++newRear] = queue[i];
        }
    }


    printf("Queue after removing negatives: ");
    for(int i = newFront; i <= newRear; i++) {
        printf("%d ", newQueue[i]);
    }

    return 0;
}
