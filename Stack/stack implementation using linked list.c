// Stack - linked list based implementation

typedef struct Node{
    int data;
    struct Node* link;
}Node;


Node* Push(Node* top,int x){
    Node* temp = (Node*)malloc(sizeof(Node))
    temp->data = x;
    temp->link = top;
    top = temp;
    return top;
}

void Pop(){
    Node* temp;
    if(top==NULL) return;  //check if stack is empty
    temp=top;
    top = top->link;  //updated the top with the next value
    free(temp);       //free the temp node
    
}

int main(){
    Node* top = NULL;
    top = Push(top,10);
    top = Push(top,20);
    top = Push(top,30);

    return 0;
}