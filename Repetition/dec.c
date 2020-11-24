#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define SIZE 20U

typedef struct
{
    uint8_t item[SIZE];
    uint8_t front, rear;

} Queue;

// functions prototypes
void init(Queue *);
void ins_at_rear(Queue *, uint8_t);
int del_from_rear(Queue *);
void ins_at_front(Queue *, uint8_t);
int del_from_front(Queue *);
void menu();

int main()
{

    Queue q;
    init(&q);
    uint8_t quit = 0;
    uint8_t value;
    menu();
    while (!quit)
    {
        uint8_t choise;
        printf("Please enter your option\n");
        scanf("%d", &choise);

        switch (choise)
        {

        case 1:
            printf("Insert a value at the rear\n");
            scanf("%d", &value);
            ins_at_rear(&q, value);
            break;
        case 2:
            printf("Insert a value at front\n");
            scanf("%d", &value);
            ins_at_front(&q, value);
            break;
        case 3:
            value = del_from_rear(&q);
            if (value == -9999)
            {
                printf("UNDERFLOW\n");
            }
            else
            {
                printf("Deleted from %d\n", value);
            }

            break;
        case 4:
            value = del_from_front(&q);
            if (value == -9999)
            {
                printf("UNDERFLOW\n");
            }
            else
            {
                printf("Deleted from %d\n", value);
            }

            break;
        case 5:
            printf("Thanx for using DLC QUEUE\n");
            quit = 1;
            break;
        default:
            printf("Invalid choise alid options are 1 - 5\n");
            break;
        }
    }

    return 0;
}
void init(Queue *qp)
{
    qp->front = 0;
    qp->rear = -1;
}
void ins_at_rear(Queue *qp, uint8_t v)
{
    if (qp->rear == SIZE - 1)
    {
        printf("UNABLE TO INSERT AT REAR\n");
        return;
    }
    qp->rear++;
    qp->item[qp->rear] = v;
}
int del_from_rear(Queue *qp)
{
    if (qp->front > qp->rear)
    {
        printf("QUEUE UNDERFLOW\n");
        return -9999;
    }
    int v = qp->item[qp->rear];
    qp->rear--;
    return v;
}
void ins_at_front(Queue *qp, uint8_t v)
{
    if (qp->front == 0)
    {
        printf("UNABLE TO INSERT AT FRONT\n");
        return;
    }
    qp->front--;
    qp->item[qp->front] = v;
}
int del_from_front(Queue *qp)
{
    if (qp->front > qp->rear)
    {
        printf("QUEUE UNDERFLOW\n");
        return -9999;
    }
    int v = qp->item[qp->front];
    qp->front++;
    return v;
}
void menu()
{
    printf("----------FIFO Queue Operations----------\n");
    printf("-----------------------------------------\n");
    printf("1. Insert at rear\n");
    printf("2. Insert at front\n");
    printf("3. Delete from rear\n");
    printf("4. Delete from front\n");
    printf("5. Quit\n");
    printf("-----------------------------------------\n\n");
}
