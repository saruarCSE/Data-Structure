#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int value;
    Node* next;
    Node* prev;

    Node(int value){
        this->value=value;
        this->next=NULL;
        this->prev=NULL;

    }

};

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail=newnode;
        return;
    }
    tail->next =newnode;
    newnode->prev=tail;
    tail = newnode;
}

void insert_at_any_possition(Node* &head,Node* &tail,int val){
    int idx;
}

void print_forward(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp =tmp->next;
    }
    cout<<"\n";
}


int main(){

    Node* head = new Node(10);
    // Node* head = NULL;
    Node* a= new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);
    // Node* tail = NULL;

    head->next =a;
    a->prev=head;

    a->next=b;
    b->prev =a;

    b->next=c;
    c->prev =b;

    c->next=tail;
    tail->prev=c;
    
    insert_at_head(head,tail,100);
    insert_at_head(head,tail,200);
    insert_at_head(head,tail,300);
    print_forward(head);
    return 0;

    
    return 0;
}