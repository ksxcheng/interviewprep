/* Reverse STring ITERATIVEY */

#include <iostream>
#include <string>
using namespace std;

string reverse(string& s) 
{
  int left = 0;
  int right = s.size() - 1;
  while (left < right)
  {
    char temp;
    temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    left++;
    right--;
  }
  return s;
}

int main()
{
  string input;
  cin >> input;
  cout << "Reversed String: " << reverse(input) << endl;
}
