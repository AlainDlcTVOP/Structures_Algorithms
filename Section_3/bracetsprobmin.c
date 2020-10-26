#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct
{
    int item[SIZE];
    int top;
} Stack;

// function for stack op
void push(Stack *, char);
char pop(Stack *);
int IsEmpty(Stack *);
char stacktop(Stack *);

// function required for this application
int isOpeningMatch(char, char);

// actual implementation of the algorithm
int checkExpr(char[]);

int main(int argc, char const *argv[])
{

    return 0;
}
void push(Stack *sp, char v)
{
    if (sp->top == SIZE - 1)
    {
        printf("StackOverflow");
        exit(1);
    }
    sp->item[++sp->top] = v;
}
char pop(Stack *sp)
{
    if (IsEmpty(sp))
    {
        printf("Stackunderflow");
        exit(1);
    }
    return sp->item[sp->top--];
}
int IsEmpty(Stack *sp)
{
    return sp->top == -1;
}
char stacktop(Stack *sp)
{
    if (IsEmpty(sp))
    {
        printf("StackOnderflow");
        exit(1);
    }
    return sp->item[sp->top];
}
int isOpeningMatch(char left, char right)
{
    int match = 0;
    switch (left)
    {
    case '(':
        if (right == '(')
            match = 1;
        break;
    case '{':
        if (right == '{')
            match = 1;
        break;
    case '[':
        if (right == '[')
            match = 1;
        break;

    default:
        printf("Invalid symbol encountered, terminating program\n");
        exit(1);
        break;
    }
    return match;
}
int checkExpr(char expr[])
{
    Stack stack;
    stack.top = -1;

    int error = 0;
    int i = 0;
    while (expr[i] != '\0')
    {
        char next_char = expr[i];
        if (next_char == '(' || next_char == '{' || next_char == '[')
            push(&stack, next_char);
        else if (next_char == ')' || next_char == '}' || next_char == ']')
        {
            if (IsEmpty(&stack))
            {
                error = 1;
                break;
            }
            else if (isOpeningMatch(stacktop(&stack), next_char))
            {
                pop(&stack);
            }
            else
            {
                error = 1;
                break;
            }
        }
        ++i;
    }
    if (!error && !IsEmpty(&stack))
    {
        error = 1;
    }
    return error;
}