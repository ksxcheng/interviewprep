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

void print(Node* head)
{
  while (head != NULL)
  {
    cout << head->data << "-> ";
    head = head->next;
  }
  cout << endl;
}

void modify(Node* head)
{
  Node* curr = head;
  Node* runner;
  while(curr != NULL)
  {
    int data = head->data;
    runner = curr;
    while (runner != NULL && runner->next !=NULL)
    {
      if (runner->next->data == data)
      {
        Node* temp = runner->next;
        runner->next = runner->next->next;
        free(temp);
        runner = runner->next;
        cout << "here ***" << endl;
      }
      else
      {
        runner= runner->next;
      }
    }
    curr = curr->next;
  }
  print(head);
}
int main()
{
  Node* head = new Node(5);
  head->next = new Node(6);
  head->next->next = new Node(2);
  head->next->next->next = new Node(5);
  head->next->next->next->next = new Node(4);

  modify(head);
}
