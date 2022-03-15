#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void show_list(Node* head){
    while (head != NULL){
    cout<<head->data<<endl;
    head=head->next;
    }
}

int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* forth = NULL;

    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    third = (struct Node*) malloc (sizeof(struct Node));
    forth = (struct Node*) malloc (sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=forth;

    forth->data=40;
    forth->next=NULL;

    show_list(head);

    second->next=forth;
    cout<<"\n";

    show_list(head);



    return 0;
}