#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Node{
    char character;
    Node* link;
}Node;

Node* top = NULL;

void Push(char x)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data=x;
    temp->link=top;
    top=temp;
}

void Pop()
{
    Node* temp;
    if (top==NULL) return;
    temp=top;
    top=top->link;
    free(temp);
}

char Top()
{
    return top->character;
}

void Reverse (char* string,size_t n)
{
    len = (int*)n; //int type cast
    for (int i = 0; i<len-1;i++)
    {
        Push(string[i]);
    }
    for (int i=0;i<n-1;i++){
        string[i] = Top();
        Pop();
    }
    printf("Output: %s",string);
}

int main()
{
    char C[51];
    printf("Enter a string.\n");
    scanf("%s", C);
    Reverse(C,strlen(C));

    //strlen() function works at runtime. It accepts the starting address of a character array and moves sequentially through memory, incrementing a counter for each character until it hits the null terminator (\0). 
    // Because it scans every character, its time complexity is O(n), where n is the length of the string. 
}