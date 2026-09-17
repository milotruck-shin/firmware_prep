//reverse array in place using O(1) additional memory.
int main()
{
    int arr [] = {2,4,8,12,16,18};
    int A = 0;
    int B = (sizeof(arr) / sizeof(arr[0]))-1;
    int array_size = (sizeof(arr) / sizeof(arr[0]);

    while (A<B)
    {
        a_element = arr[A];
        b_element = arr[B];
        a_element^=b_element;
        b_element^=a_element;
        a_element^=b_element;
        A++;
        B--;
    }

    for (int i=0;i<array_size;i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}


//two pointer
//given an array and a target of 15, find two elements whose sum equals the target of -2
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool twoSum(vector<int> &arr,int target)
{
    unordered_set<int> s;  //declare an unordered hash map
    for (int i=0;i<arr.size();i++)
    {
        int complement = target - arr[i];
        if (s.find(complement)!=s.end())  // if complement is in the hashmap
        {
            return true;
        }

        s.insert(arr[i]);
    }

    return false; //if no pairing is found
}

int main(){
    vector<int> arr={0,-1,2,-3,1};
    int target = -2;

    if (twoSum(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}


//implement a stack using array
#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;


void Push(int x)
{
    if (top==MAX_SIZE-1)
    {
        printf("stack overflow!\n");
        return;
    }
    A[++top]=x;
}

void Pop()
{
    if (top==-1)
    {
        printf("Error: No value to pop");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

int main()
{
    Push(2);
    Push(5);
    Push(10);
    Pop();
    Push(12);
}

//linked list reversal in place
#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
}

Node* head;

void Reverse()
{
    Node *prev,*current,*next;
    prev = NULL;
    current = head;

    while (current!=NULL)
    {
        next = current->next;
        current->next= prev;
        prev = current;
        current = next;
    }

    head = prev;
}

// detect a linked list cycle

#include <unordered_set>
class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            this->data=x;
            this->next = nullptr;
        }
};

bool detectLoop(Node* head)
{
    while (head!=nullptr){
        unordered_set<Node*> st;
        if (st.find(head)!=st.end())
        {
            return true;
        }

        st.insert(head);
        head = head->link;
    }

    return false;

}

//O(n) Time and O(n) Space



//implement a circular queue using linked list
struct Node{
    int data;
    struct Node* next;
};

