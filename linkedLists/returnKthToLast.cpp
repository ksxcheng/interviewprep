#include <iostream>
using namespace std;

struct Node
{
  Node(int num): data(num), next(NULL)
  {
    ;
  }
  int data;
  Node* next;
};

void find(Node* head, int k)
{
  int size = 0;
  Node* temp = head;
  while (temp)
  {
    size++;
    temp = temp->next;
  }
  int find = size - k;
  temp = head;
  for (int i = 0; i < find; i++)
  {
    temp = temp->next;
  }
  cout << temp->data << endl;

}

int main()
{
  Node* head = new Node(5);
  head->next = new Node(6);
  head->next->next = new Node(2);
  head->next->next->next = new Node(6);
  head->next->next->next->next = new Node(11); 
  head->next->next->next->next->next = new Node(100);

  find(head, 4); 
}
