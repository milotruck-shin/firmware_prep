#include <stdlib.h>
#include <stdio.h>
#define MAXSIZE 10

int A [MAXSIZE];
int front,rear; //index

bool IsEmpty()
{
    if (front == -1 && rear ==-1){
        return True;
    }

    else{
        return False;
    }
}

bool IsFull()
{
    if (front==MAXSIZE-1){
        return True;
    }

    else{
        return False;
    }
}


int Enqueue(int x)
{
    if (IsFull()){
        return;
    }

    else if (isEmpty()){
        front = 0;
        rear = 0;
    }

    else{
        rear = rear+1;
    }

    A[rear]=x;
    return A;
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
        front = front+1;
    }
}