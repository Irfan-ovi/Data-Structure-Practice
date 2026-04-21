#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
    char str[SIZE], queue[SIZE];
    int front = -1, rear = -1;

    printf("Enter string: ");
    getchar(); // clear buffer
    gets(str);

    // Enqueue without spaces
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] != ' ') {
            if(front == -1) front = 0;
            queue[++rear] = str[i];
        }
    }

    // Print result
    printf("Compressed string: ");
    while(front <= rear) {
        printf("%c", queue[front++]);
    }
    printf("\n");
    return 0;
}
