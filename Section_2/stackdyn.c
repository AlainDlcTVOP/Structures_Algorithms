#include <stdio.h>
#include <stdlib.h>

//#define SIZE 2

typedef struct
{
    int *item;
    int top;
    int size;
} Stack;

void push(Stack *, int);
int pop(Stack *);
void init(Stack *, int);
void deallocate(Stack *);
void menu();
int main(void)
{
    Stack s1;
    init(&s1, 3);

    menu();

    int choice, value;

    while (1)
    {
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            push(&s1, value);

            break;
        case 2:
            value = pop(&s1);
            if (value != -9999)
            {
                printf("Popped data: %d\n", value);
            }
            break;
        case 3:
            printf("EXIT THE STACK PROGRAM\n");
            deallocate(&s1);
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}

void menu()
{
    puts("-------------");
    printf(".1 PUSH\n");
    printf(".2 POP\n");
    printf(".3 EXIT\n");
    puts("-------------");
}
void push(Stack *sp, int value)
{
    if (sp->top == sp->size - 1)
    {
        printf("OVERFLOW\n");
        return;
    }
    sp->top++;
    sp->item[sp->top] = value;
}
int pop(Stack *sp)
{
    if (sp->top == -1)
    {
        printf("UNDERFLOW\n");
        return -9999;
    }
    int value;
    value = sp->item[sp->top];
    sp->top--;
    return value;
}
void init(Stack *sp, int size)
{
    sp->top = -1;
    sp->item = (int *)malloc(sizeof(int) * size);
    if (sp->item == NULL)
    {
        printf("Cant't allocate memory\n");
        exit(1);
    }
    sp->size = size;
}
void deallocate(Stack *sp)
{
    if (sp->item != NULL)

        free(sp->item);
}
