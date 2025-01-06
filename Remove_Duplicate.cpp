#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int value;
    Node* next;

    Node(int value){
        this->value=value;
        this->next=NULL;    
    }

};

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head=newnode;
        tail = newnode;
        return;
    }
   
    tail->next=newnode;

    tail=newnode;
}

void remove_doub(Node* &head){
    Node* crt = head;
    while (crt!= NULL)
    {
        Node* prev =crt;
        Node* tmp = crt->next;

        while (tmp != NULL)
        {
           if(crt->value==tmp->value){
            prev->next =tmp->next;
            delete tmp;
            tmp =prev->next;
           }
           else{
            prev=tmp;
            tmp =tmp->next;
           }
        }
        crt=crt->next;
        
    }
    
}

void print_list(Node* head){
    Node* tmp =head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<"\n";
}



int main(){

    Node* head =NULL;
    Node* tail =NULL;

    int value;
    while(true){
        cin>>value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value);
    }

    remove_doub(head);
    print_list(head);

    return 0;
}