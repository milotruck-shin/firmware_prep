#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* head;

void Insert (int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    if (head!=NULL) temp->next = head;
    head = temp;
}

void Insert2(int x, int n)
{
    Node* temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = x;
    temp1->next = NULL;
    if (n==1){
        temp1->next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for(int i=0;i<n-2;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next= temp1;
}


void Print()
{
    Node* temp = head;
    printf("List is: ")
    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}


int main()
{
    head = NULL;  // empty list
    printf ("How many numbers?\n");
    int n, i, x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}