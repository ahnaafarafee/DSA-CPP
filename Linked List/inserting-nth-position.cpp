#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

struct Node *head;

void Insert(int data, int n)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    // insert at the first pos
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    // nth pos
    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
};

void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    head = NULL; // -> empty list

    int n, x, p;

    cout << "How many numbers: "
         << " ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the number and position: "
             << " ";
        cin >> x >> p;

        Insert(x, p);
        Print();
    }

    return 0;
}