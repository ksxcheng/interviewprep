#include <iostream>

using namespace std;

struct Node {
  char data;
  Node* left, *right;

  Node(int data_) : data(data_) 
  {
    left = NULL;
    right = NULL;
  }
};

void check(Node* root, int& result, int expected, int current)
{
  if (root == NULL) return;
  if (root->data == expected)
  {
    current++;
    if (current > result)
    {
      result = current;
    }
  }
  check(root->left, result, root->data + 1, current);
  check(root->right, result, root->data + 1, current);
}


int main() {
  Node* root = new Node(6);
  root->right = new Node(9);
  root->right->left = new Node(7);
  root->right->right = new Node(10);
  root->right->right->right = new Node(11);
  root->right->right->right->right = new Node(12);
  root->right->right->right->left = new Node(12);
  root->right->right->right->right->right = new Node(13);
  root->right->right->right->left->left = new Node(13);
  root->right->right->right->left->left->left = new Node(14);
  root->right->right->right->left->left->left->right = new Node(15);
  root->right->right->right->left->left->left->left = new Node(16);
  root->right->right->right->left->left->left->right->right = new Node(16);
 
  int result = 0;
  check(root, result, root->data + 1, 0);
  cout << "Result is: " << result + 1 << endl;
}

