#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *create(int a)
{
    Node *ptr = malloc(sizeof(Node));
    if (ptr == NULL) 
    {
        return NULL;
    }
    ptr->value = a;
    ptr->next = NULL;
    return ptr;
}

int inserthead(Node **q, int b)
{
    Node *ptr = create(b);
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    ptr->next = *q;
    *q = ptr;
    return 1;
}

int printnode(Node **ptr)
{
    Node *add = *ptr;
    while(add != NULL)
    {
        printf("%d ", add->value);
        add = add->next;
    }
    printf("\n");
    return 0;
}

int main()
{
    Node *head = NULL;
    inserthead(&head, 10);
    inserthead(&head, 20);
    inserthead(&head, 30);
    printnode(&head);
    return 0;
}

