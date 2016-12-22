#include <iostream>
#include <unordered_map>
using namespace std;


struct Node 
{
  Node(int num) : data (num), next(NULL)
  {
    ;
  }
  int data;
  Node* next;
};

void print(Node* head);

void removeDups(Node* head)
{
  unordered_map<int,int> map_;
  Node* temp = head;
  Node* prev = head;
  while (temp != NULL)
  {
    if (!(map_.count(temp->data)))
    {
      map_[temp->data] = 1;
    }
    else
    {
      prev->next = temp->next;
      free(temp);
      temp = prev->next;
      continue;
    }
    prev = temp;
    temp = temp->next;
  }
  print(head);
}

void print(Node* head)
{
  while (head)
  {
    cout << head->data << "-> ";
    head = head->next;
  }
  cout << endl;
}
int main()
{
  Node* head = new Node(1);
  head->next = new Node(1);
  head->next->next = new Node(1);
  //head->next->next = new Node(2);
  //head->next->next->next = new Node(5);
  //head->next->next->next->next = new Node(10);
  //head->next->next->next->next->next = new Node(4);
  removeDups(head);
}
