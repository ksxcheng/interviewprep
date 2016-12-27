#include <iostream>
using namespace std;

struct Node
{
  Node(int num) : data(num), next(NULL)
  {
    ;
  }
  int data;
  Node* next;
};

Node* partition(Node* head, int num)
{
  Node* temp = head;
  Node* prev = head;
  while (temp)
  {
    if (temp->data < num && temp != head)
    {
       prev->next = temp->next;
       temp->next = head;
       head = temp;
       temp = prev->next;
       continue;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

int main()
{
  Node* head = new Node(3);
  head->next = new Node(5);
  head->next->next = new Node(8);
  head->next->next->next = new Node(5);
  head->next->next->next->next = new Node(10);
  head->next->next->next->next->next = new Node(2);
  head->next->next->next->next->next->next = new Node(1);
  head = partition(head, 5);

  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  } 
  cout << endl; 
}
