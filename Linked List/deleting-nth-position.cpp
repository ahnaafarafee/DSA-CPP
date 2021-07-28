#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

struct Node *head;

// deletes ele at nth pos
void Delete(int n)
{
    Node *temp1 = new Node();

    // removing the first ele
    if (n == 1)
    {
        head = temp1->next; //linking to the (n+1)th node
        // temp1->next means --> (*temp1).next
        delete temp1; // free up the memory of that node
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            temp1 = temp1->next; //going to the (n-1)th node
        }

        Node *temp2 = temp1->next; // linking to the (n)th node
        temp1->next = temp2->next; // linking to the (n+2)th node
        delete temp2;              // free up the memory of nth node after unlinking(deleting)
    }
};

// inserts ele et the end of the list
void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head; // -> NULL
    head = temp;
};
// prints all ele in the list
void Print()
{
    Node *temp = head;
    cout << "List: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    head = NULL; // init a empty list

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    // at this point the list will be -> 2, 4, 6, 5
    Print();
    int n;
    cout << "Enter the position" << endl;
    cin >> n;
    Delete(n); // deleting ath pos n
    Print();   // printing after deleting

    return 0;
}