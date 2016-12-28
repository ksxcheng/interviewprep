#include <iostream>

using namespace std;

struct Node
{
  Node(char num): data(num), next(NULL)
  {
    ;
  }
  char data;
  Node* next;
};

void findLoop(Node* head)
{
  Node* fast = head->next;
  Node* slow = head;

  while (slow && fast)
  {
    if (slow == fast)
    {
      cout << "Loop starts at: " << slow->data << endl;
      return;
    }
    slow = slow->next;
    fast = fast->next->next;
  }
  cout << "No Loop detected" << endl;
  return;
}

int main()
{
  Node* head = new Node('a');
  head->next = new Node('b');
  head->next->next = new Node('c');
  head->next->next->next = new Node('d');
  head->next->next->next->next = new Node('e');
  head->next->next->next->next->next = head->next->next->next;
  findLoop(head);
}
