#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  vector<int> first;
  first.assign(100,7);
  vector<int>::iterator it;

  cout << "First contents: ";
  for (it = first.begin(); it != first.end(); it++)
  {
    cout << *it;
  }
  cout << endl;
  
  first.at(1) = 59;
  cout << "First.at(1) : " << first.at(1) << endl;
  return 0;
}
