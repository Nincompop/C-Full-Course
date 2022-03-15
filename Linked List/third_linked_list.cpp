/* Inserted (add_nd_in_beg) in the beggning of the linked list by first making it a node and then giving it
sapce in the heap after that pointed it to the first node and everything else reamins same*/

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
    Node *add_nd_in_beg = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();
    add_nd_in_beg = new Node();

    add_nd_in_beg->data = 5;
    add_nd_in_beg->next = head;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = forth;

    forth->data = 40;
    forth->next = NULL;

    print_data(add_nd_in_beg);

    return 0;
}