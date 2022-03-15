#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void print_data(Node* head){
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* forth = NULL;
    Node* add_nd_bw = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();
    add_nd_bw = new Node();
    
    head ->data = 10;
    head->next = second;

    second ->data = 20;
    second ->next =add_nd_bw;

    third->data = 30;
    third->next = forth;

    forth ->data =40;
    forth ->next =NULL;

    add_nd_bw->data = 25;
    add_nd_bw->next = third;
    
    print_data(head);


    return 0;
}