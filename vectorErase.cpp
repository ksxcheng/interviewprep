#include <iostream>
#include <vector>

using namespace std;
int main() 
{
  vector<int> myvector;
  for (int i = 0; i <= 10; i++)
  {
    myvector.push_back(i);
  }
  //1,2,3,4,5,6,7,8,9,10
  myvector.erase(myvector.begin() + 5); //erase the 6th element

  //1,2,3,4,5,7,8,9,10
  myvector.erase(myvector.begin(), myvector.begin() + 3);
 
  //4,6,7,8,9,10
}
