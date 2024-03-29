#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct
{
    int item[SIZE];
    int rear, front;
} Queue;

// function prototypes
void initQueue(Queue *);
void enqueue(Queue *, int);
int dequeue(Queue *);
void menu();
int main()
{
    Queue q;
    initQueue(&q);
    int quit = 0;
    int value;
    menu();
    while (!quit)
    {
        int choice;
        printf("Input your option ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input value to enqueue:");
            scanf("%d", &value);
            enqueue(&q, value);

            break;
        case 2:
            value = dequeue(&q);
            if (value == -9999)
                printf("Queue underflow\n");
            else

                printf("Deleted value: %d\n", value);

            break;
        case 3:
            quit = 1;
            printf("Thanx ");
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }

    return 0;
}
void initQueue(Queue *qp)
{
    qp->front = 0;
    qp->rear = 0;
}

void enqueue(Queue *qp, int v)
{
    if (qp->rear == SIZE)
    {
        printf("Queue Overflow\n");
        return;
    }
    qp->item[qp->rear] = v;
    qp->rear += 1;
}

int dequeue(Queue *qp)
{
    if (qp->rear == qp->front)
    {
        return -9999;
    }
    int v = qp->item[qp->front];
    qp->front += 1;
    return v;
}
void menu()
{
    printf("---------FIFI Queue Operations---------\n");
    printf("---------------------------------------\n");
    printf("1. Enqueue\n");
    printf("2. Dnqueue\n");
    printf("3. Quit\n");
    printf("---------------------------------------\n");
}