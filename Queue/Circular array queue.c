#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 10

int A [MAXSIZE];
int front,rear; //index

bool isEmpty()
{
    if (front==-1 && rear ==-1)
    {
        return true;
    }

    else{
        return false;
    }
}

bool isFull()
{
    if ((rear+1)%MAXSIZE==front){
        return True;
    }

    else{
        return False;
    }
}

void Enqueue(int x)
{
    if (isFull())
    {
        return;
    }

    else if (isEmpty())
    {
        front = 0;
    }

    else
    {
        rear = (rear+1)%MAXSIZE;
    }

    A[rear]=x;
}

void Dequeue()
{
    if (isEmpty()){
        return;
    }

    else if (front == rear)
    {
        rear=-1;
        front=-1;
    }

    else{
        front = (front+1)%MAXSIZE;
    }
}

int main()
{
    front =-1;
    rear=-1;

    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Dequeue();
    Dequeue();
    Dequeue();

}