#include <iostream>
#include <stack>
using namespace std;

struct Node
{
  Node(char letter) : data(letter), next(NULL)
  {
    ;
  }
  char data;
  Node* next;
};

void check(Node* head)
{
  Node* temp = head;
  stack<char> stack_;
  while (temp)
  {
    stack_.push(temp->data);
    temp = temp->next;
  }
 
  while (!(stack_.empty()))
  {
    char letter = stack_.top();
    if (head->data != letter)
    {
      cout << "False" << endl;
      return;
    }
    stack_.pop();
    head= head->next;
  }
  cout << "Yes, palindrome!" << endl;
  return;
}
int main()
{
  Node* head = new Node('c');
  head->next = new Node('i');
  head->next->next = new Node('v');
  head->next->next->next = new Node('i');
  head->next->next->next->next = new Node('c');
  check(head);
}
