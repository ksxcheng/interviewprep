#include <iostream>
#include <string>

using namespace std;

string reverse(string s)
{
  string answer;
  if (s.size() == 1)
  {
    return s;
  }
  answer += s[s.size() - 1];
  answer += reverse(s.substr(0, s.size() -1));
  return answer;
}

int main()
{
  string input;
  cin >> input;
  cout << "Reversed: " << reverse(input) << endl; 
}
