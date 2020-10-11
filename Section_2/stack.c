#include <stdio.h>
#define SIZE 5

typedef struct
{
    int item[SIZE];
    int top;
} Stack;

void push(Stack *, int);
int pop(Stack *);
void init(Stack *);

int main()
{
    Stack s1;

    push(&s1, 100);
    push(&s1, 300);
    push(&s1, 500);
    push(&s1, 170);

    printf("deleted %d \n", pop(&s1));
    printf("deleted %d \n", pop(&s1));
    printf("deleted %d \n", pop(&s1));
    printf("deleted %d \n", pop(&s1));

    return 0;
}
void push(Stack *sp, int value)
{
    if (sp->top == SIZE - 1)
    {
        printf("STACK OVERFLOW");
        return;
    }
    sp->top++;
    sp->item[sp->top] = value;
}
int pop(Stack *sp)
{
    if (sp->top == -1)
    {
        printf("STACK UNDERFLOW");
        return -9999;
    }

    int value;
    value = sp->item[sp->top];
    sp->top--;
    return value;
}
void init(Stack *sp)
{
    sp->top = -1;
}
