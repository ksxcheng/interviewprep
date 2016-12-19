#include <iostream>
#include <vector>

using namespace std;

void findPivot(vector<int>& myvect)
{
  int total = 0;
  int leftsum = 0;
  int rightsum = 0;

  for (int i = 0; i < myvect.size(); i++)
  {
    total += myvect[i];
  }

  for (int i = 0; i < myvect.size(); i++)
  {
    leftsum += myvect[i];
    rightsum = total - mmyvect[i];
    if (leftsum == rightsum)
      cout << "Pivot is: " << i << endl;
  } 
  cout << "No pivot found" << endl;
}
int main()
{
  vector<int> myvect = {1, 2, 3, 4, 0, 6};
  findPivot(myvect);
}
