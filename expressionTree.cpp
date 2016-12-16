#include <iostream>
#include <string>

using namespace std;

struct Node {
  string info;
  Node* left, *right;

  Node(string info_) : info(info_) 
  {
    left = NULL;
    right = NULL;
  }  
};

int eval(Node* root)
{
  if (root == NULL)
  {
    return 0;
  }
 
  string info_ = root->info;
    if (info_ == "*")
      return eval(root->left) * eval(root->right);
    else if (info_ == "+")
      return eval(root->left) + eval(root->right);
    else if (info_ == "-")
      return eval(root->left) - eval(root->right);
    else if (info_ == "/")
      return eval(root->left) / eval(root->right);
    else
      return stoi(root->info.c_str());
}

int main() {
  Node* root = new Node("+");
  root->left = new Node("*");
  root->left->left = new Node("5");
   root->left->right = new Node("4");
    root->right = new Node("-");
    root->right->left = new Node("100");
    root->right->right = new Node("20");
    cout << eval(root) << endl;
 
    delete(root); 
    root = new Node("+");
    root->left = new Node("*");
    root->left->left = new Node("5");
    root->left->right = new Node("4");
    root->right = new Node("-");
    root->right->left = new Node("100");
    root->right->right = new Node("/");
    root->right->right->left = new Node("20");
    root->right->right->right = new Node("2");
 
    cout << eval(root);  
    cout << endl; 
}
