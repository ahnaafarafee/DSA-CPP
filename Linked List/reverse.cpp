#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *Reverse(Node *head)
{
    Node *current, *prev, *next;
    current = head; // as head contains the add of the first ele, current points to first ele in the list
    prev = NULL;

    while (current != NULL)
    {
        next = current->next; // next points to the next ele ie. linking to the next ele
        current->next = prev; // linking to the prev el
        prev = current;       // resetting the prev
        current = next;       // resetting the prev
    }
    head = prev; // head is pointing to the last ele
    return head;
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
void Print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
};

int main()
{
    Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);

    Print(head);
    head = Reverse(head);
    Print(head);

    return 0;
}