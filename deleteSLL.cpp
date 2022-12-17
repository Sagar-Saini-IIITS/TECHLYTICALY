#include <iostream>
using namespace std;
struct Node{
int data;
Node *next;
Node(int data){
    this -> data = data;
    this -> next = NULL;
}
};

 // function to  delete alternate nodes
Node * deleteNode(Node *head){
    // a->b->c->d->e
    Node* back=head;  // back point to node a
    Node* front=head->next; // front point to node b
    while(back && front){
        back->next=front->next; // linking a with node c
        if(front) back=front->next; // back point to c now
        if(back) front=back->next; // front point to d now
    }
    return head;
}

int main()
{  
    Node* dummy=new Node(0);  // creating dummy node which will store address of head of linked list

    // Taking input and creating nodes
    cout<<"Enter the values in sequence and -1 to finish"<<endl;
    int val;
    cin>>val;
    Node *temp=dummy;
    while(val!=-1){
        temp->next=new Node(val);
        temp=temp->next;
        cin>>val;
    }
    
    // printing node sequence before deletion
    temp=dummy->next;
    cout<<"Before Deletion:"<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    
    // deleting alternate nodes
    deleteNode(dummy->next);
    
    
    // printing node sequence after deletion
    temp=dummy->next;
    cout<<"After Deletion:"<<endl;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}
