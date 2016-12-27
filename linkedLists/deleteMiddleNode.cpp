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

void remove(Node* node_)
{
  node_->data = node_->next->data;
  node_->next = node_->next->next;
  delete node_->next;
}


int main()
{
  Node* head = new Node(1);
  head->next = new Node(5);
  head->next->next = new Node(7);
  head->next->next->next = new Node(10);
  head->next->next->next->next = new Node(100);
  head->next->next->next->next->next = new Node(37); 
  remove(head->next->next);  

  Node* temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;

}
