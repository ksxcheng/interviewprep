#include <iostream>
#include <stack>

int main()
{
  std::stack<int> mystack;
  
  for (int i = 0; i < 5; ++i)
    mystack.push(i);

  std::cout << "Popping elements " << std::endl;
  while (!mystack.empty())
  {
    std::cout << ' ' << mystack.top();
    mystack.pop();
  }
  std::cout << "Stack empty now " << std::endl;
  /* Forms seg fault if no top element and top is called */
  //std::cout << "Top element: " << mystack.top(); 
  //std::cout << "Pop top element: ";
  //mystack.pop() forms seg fault if no top element and pop is called */

  mystack.push(5);
  mystack.top() = 10;
    while (!mystack.empty())
  {
    std::cout << ' ' << mystack.top();
    mystack.pop();
  }
}
