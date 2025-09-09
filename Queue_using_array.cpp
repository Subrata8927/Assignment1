#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue Overflow!\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue Underflow!\n");
    else {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void peep() {
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else
        printf("Front element: %d\n", queue[front]);
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty!\n");
    else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Queue using Array ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peep\n4. Display\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

