#include <stdio.h>
#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
        printf("Circular Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = value;
    printf("Inserted %d\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Circular Queue Underflow!\n");
        return;
    }

    printf("Deleted: %d\n", cq[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void peep() {
    if (front == -1)
        printf("Circular Queue is empty!\n");
    else
        printf("Front element: %d\n", cq[front]);
}

void display() {
    if (front == -1) {
        printf("Circular Queue is empty!\n");
        return;
    }
    printf("Circular Queue elements:\n");

    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Circular Queue using Array ---\n");
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

