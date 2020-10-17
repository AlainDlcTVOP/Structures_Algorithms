/**
 * @file stack.h
 * @author Alain (AlainDlcTVOP)
 * @brief 
 * @version 0.1
 * @date 2020-10-17
 * Simple Stack interface with fixt size
 * @copyright Copyright (c) 2020
 * 
 */
#ifndef STACK_H
#define STACK_H

#define SIZE 5
#include <stdlib.h>
typedef struct
{
    int item[SIZE];
    int top;
} Stack;

void push(Stack *, int);
int pop(Stack *);
void init(Stack *);

#endif /* STACK_H */