#include <iostream>

using namespace std;

struct Node {
  char data;
  Node* left;
  Node* right;
  
  Node(int data_) : data(data_) 
  {
    left = NULL;
    right = NULL;
  }
};

bool checkIdenticalTree(Node* root1, Node* root2)
{
  if (!root1 && !root2)
  {
    return true;
  }
  else if (root1 && root2)
  {
    if (!checkIdenticalTree(root1->left, root2->left) || !checkIdenticalTree(root1->right, root2->right))
    {
      return false;
    }
    if (root1->data != root2->data)
      return true;
    cout << "here" << endl;
  }
  else  
    return false; 
}

int main()
{
    struct Node *root1 = new Node(1);
    struct Node *root2 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left  = new Node(4);
    root1->left->right = new Node(5); 
 
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
   
    cout << checkIdenticalTree(root1, root2) << endl;
}
