#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> myvector;
  myvector.assign(5, 100);
  int sum = 0;

  while (!myvector.empty())
  {
    sum += myvector.back();
    myvector.pop_back();  
  }
  cout << sum;
  return 0;
}
