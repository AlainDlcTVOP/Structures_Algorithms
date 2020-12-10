/**
 * @file linklist2.c
 * @author Alain (AlainDlcTVOP)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    struct Node *head;
    struct Node *tail;
    int nodeCount;
} LinkedList;

// function prototypes
void initList(LinkedList *);
void createListFromRandomNumbers(LinkedList *, int);
void insertTail(LinkedList *, int);
void insertAtTail(LinkedList *, int);

// printing of linkedlist in forward direction;
void printListForward(LinkedList *);
void printListReverse(LinkedList *);

// helper recursive function for implementing the traversal
void printRecForward(Node *);
void printRecReverse(Node *);

int main()
{

    LinkedList list;
    initList(&list);
    createListFromRandomNumbers(&list, 10);
    printListForward(&list);
    printf("\n");
    printListReverse(&list);
    printf("\n");

    return 0;
}
void initList(LinkedList *lstPtr)
{
    lstPtr->head = NULL;
    lstPtr->tail = NULL;
    lstPtr->nodeCount = 0;
}
void createListFromRandomNumbers(LinkedList *lstPtr, int n)
{
    int i;
    srand(time(NULL));

    for (int i = 1; i < n; i++)
    {
        int k = rand() % 1000;
        insertAtTail(lstPtr, k);
    }
}
void insertAtTail(LinkedList *lstPtr, int data)
{
    Node *newNodePtr = (Node *)malloc(sizeof(Node));
    if (newNodePtr == NULL)
    {
        printf("Uanble to allocate new node\n");
        return;
    }
    newNodePtr->data = data;
    newNodePtr->next = NULL;

    if (lstPtr->nodeCount == 0)
    {
        lstPtr->head = newNodePtr;
        lstPtr->tail = newNodePtr;
    }
    else
    {
        lstPtr->tail->next = newNodePtr;
        lstPtr->tail = newNodePtr;
    }
    lstPtr->nodeCount++;
}
void insertAtHead(LinkedList *lstPtr, int data)
{
    Node *newNodePtr = (Node *)malloc(sizeof(Node));
    if (newNodePtr == NULL)
    {
        printf("Unable to allocate new node\n");
        return;
    }
    newNodePtr->data = data;
    newNodePtr->next = NULL;

    if (lstPtr->nodeCount == 0)
    {
        lstPtr->head = newNodePtr;
        lstPtr->tail = newNodePtr;
    }
    else
    {
        newNodePtr->next = lstPtr->head;
        lstPtr->head = newNodePtr;
    }
    lstPtr->nodeCount++;
}
void printListForward(LinkedList *lstPtr)
{
    printRecForward(lstPtr->head);
}
void printListReverse(LinkedList *lstPtr)
{
    printRecReverse(lstPtr->head);
}
void printRecForward(Node *p)
{
    if (p == NULL)
    {
        return;
    }
    printf("%4d", p->data);
    printRecForward(p->next);
}
void printRecReverse(Node *p)
{
    if (p == NULL)
    {
        return;
    }

    printRecReverse(p->next);
    if (p == NULL)
    {
        return;
    }

    printRecForward(p->next);
    printf("%4d", p->data);
}