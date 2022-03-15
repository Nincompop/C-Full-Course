#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void print_data(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *forth = NULL;
    Node *add_nd_end = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();
    add_nd_end = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = add_nd_end;

    add_nd_end->data = 50;
    add_nd_end->next = NULL;

    print_data(head);

    return 0;
}