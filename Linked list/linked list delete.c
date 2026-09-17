#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* head;

void Insert (int x);
void Print();

void Delete(int n)
{
    Node* temp1 = head;

    if (n==1)
    {
        head=temp1->next;
        free(temp1);
        return;
    }

    else
    {
        for (int i=0;i<n-2;i++)
        {
            temp1 = temp1->next;
        }
        Node* temp2 = temp1 -> next;
        temp1->next=temp2->next;
        free(temp2);
    }
}



int main ()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);  //List: 2,4,6,5
    Print();
    int n;
    printf("Enter a position:\n");
    scanf("%d",&n);
    Delete(n);
    Print();

}
