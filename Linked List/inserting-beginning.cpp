#include <bits/stdc++.h>
using namespace std;

// inserting at the beginning of the list

class Node
{
public:
  int data;
  Node *next;
};

struct Node *head; // global var, accessible everywhere

void Insert(int x)
{
  Node *temp = new Node();
  temp->data = x;
  temp->next = head; // -> NULL
  head = temp;
};

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
  head = NULL; // empty list

  int n, x;
  cout << "How many numbers?" << endl;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter the number: " << endl;
    cin >> x;
    Insert(x);
    Print();
  }

  return 0;
}