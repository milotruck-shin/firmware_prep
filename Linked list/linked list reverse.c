#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* head;

void Reverse()
{
    Node *prev,*current,*next;
    current = head;
    prev = NULL;

    while (current!=NULL)
    {
        next=current->next;
        current->next = prev;
        prev=current;
        current=next;
    }

    head = prev;
    
}



