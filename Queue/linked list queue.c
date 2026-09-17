struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = NULL; // NULL to indicate this new node is at the end of the linked list
    if (front == NULL && rear == NULL)  // if queue is empty, front and rear will be of same value as the only element in the queue
    {
        front = rear = temp;
        return;
    }

    rear->next=temp;    // else, update the rear node link from NULL to current node
    rear=temp;          //now change the variable rear to hold address of the current last node.

}

void Dequeue()
{
    struct Node* temp = front;
    if (front == NULL) return;
    if (front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        front = front -> next;
    }
    free(temp);
}

int peek();