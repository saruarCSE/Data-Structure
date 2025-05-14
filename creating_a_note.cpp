#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
 

int main(){
    Node a(10),b(20),c(30);


    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout<<a.val<<"\n";
    cout<<a.next->val<<"\n";//a er shahajje b r value print korar niyom
    cout<<a.next->next->val<<"\n";
    cout<<"\n";

    return 0;
}