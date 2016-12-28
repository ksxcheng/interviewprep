#include <iostream>
#include <string>
using namespace std;

struct Node
{
  Node(string num) : data(num), next(NULL)
  {
    ;
  }
  string data;
  Node* next;
};

int findLength(Node* head)
{
  int length = 0;
  while (head)
  { 
    length++;
    head = head->next;
  }
  return length;
}

void check(Node* head, Node* head2)
{
  int l1 = findLength(head);
  int l2 = findLength(head2);
  int diff;
  if (l1 > l2)
  {
    diff = l1 - l2;
    for (int i = 0; i < diff; i++)
    {
      head = head->next;
    }
  }
  else
  {
    diff = l2 - l1;
    for (int i = 0; i < diff; i++)
    {
      head2 = head2->next;
    }
  }
  while (head && head2)
  {
    if (head == head2)
    {
      cout << "Intersection found @: " << head->data << endl;
      return;
    }
    head = head->next;
    head2 = head2->next;
  }
  cout << "None" << endl;
  return; 
}

int main()
{
  Node* head = new Node("a1");
  head->next = new Node("a2");
  Node* head2 = new Node("b1");
  head2-> next = new Node("b2");
  head2->next ->next = new Node("b3");
  head2->next->next->next = new Node ("b4");
  head2->next->next->next->next = new Node("b5");

  Node * cHead = new Node("c1");
  cHead->next = new Node("c2");
  cHead->next->next = new Node("c3");
  
  head2->next->next->next->next->next = cHead;
  head->next->next = cHead;
  
  check(head, head2);
}


