#include <stdio.h>
#include <stdlib.h>

// Single linklist
typedef struct
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    struct Node *head;
    struct Node *tail;
    int nodeCount; // hold the node
} LinkedList;

void menu();

int main()
{
    menu();
    return 0;
}
void menu()
{
    printf("    Single Linked List Operations\n");
    printf("-----------------------------------\n");
    printf("1.  Load from file\n");         // load integer data from file and will create the list
                                            // by using insert_at_tail operation(menu option 3)
    printf("2.  Insert at head\n");         // Inserting a new node as first node
    printf("3.  Insert at tail\n");         // Inserting a new node as last node
    printf("4.  Print List (detail)\n");    // Printing the linked list in details
                                            // Including the data and pointer in each node
    printf("5.  Print List (data only)\n"); //  Printing the integer data in each node
    printf("6.  Find\n");                   // Find if an integer exisits in node from
                                            // The start in the list
    printf("7.  Delete first\n");           // Deletes first node
    printf("8.  Delete last\n");            // Deletes last node
    printf("9.  Delete a target node\n");   // Deletes a particular node, if thats exists
    printf("10. Reverse\n");                // Will physically reverse the list
    printf("11. Quit\n");                   // To terminate each node
}