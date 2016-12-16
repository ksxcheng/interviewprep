#include <iostream>
#include <string>

using namespace std;

void checkPalindrome(string &s)
{
  int left = 0;
  int right = s.size() - 1;
  while (left < right)
  {
    if (s[left] != s[right]) 
    {
      cout << "Not Palindrome" << endl;
      return;
    } 
    right--;
    left++;
  }
  cout << "Palindrome!" << endl;
}
int main()
{
  string input;
  cin >> input;
  checkPalindrome(input);
}
