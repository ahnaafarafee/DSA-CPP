#include <bits/stdc++.h>
using namespace std;

/*
    Here we are not reversing the linked list
    We are just printing the list in reversed order
*/

class Node
{
public:
    int data;
    Node *next;
};

void Print(Node *p)
{
    if (p == NULL)
        return;             // if add of the node is null then exit the recursion
    Print(p->next);         // recursive call to provide Print func the add of the next node
    cout << p->data << " "; // print the value of the node
};

Node *Insert(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }

    return head;
};

int main()
{
    Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);

    Print(head);

    return 0;
}