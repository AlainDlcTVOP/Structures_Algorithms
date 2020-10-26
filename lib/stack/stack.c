#include <stack.h>

void push(Stack *sp, uint8_t value)
{
    if (sp->top == SIZE - 1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }
    sp->top++;
    sp->item[sp->top] = value;
}
uint8_t pop(Stack *sp)
{
    if (sp->top == -1)
    {
        printf("STACK UNDERFLOW\n");
        return -9999;
    }
    uint8_t value;
    value = sp->item[sp->top];
    sp->top--;
    return value;
}
void init(Stack *sp)
{
    sp->top = -1;
}