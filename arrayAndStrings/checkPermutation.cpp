#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
void checkPermutation(string& first, string& second)
{
  if (first.size() != second.size())
  {
    cout << "No" << endl;
    return;
  }    
  sort(first.begin(), first.end());
  sort(second.begin(), second.end());
  for (int i =0; i < second.size(); i++)
  {
    if (first[i] != second[i])
    {
      cout << "No" << endl;
      return;
    }
  }  
  cout << "Yes" << endl;
}

int main()
{
  string first;
  string second;
  cin >> first >> second;
  checkPermutation(first, second);
}
