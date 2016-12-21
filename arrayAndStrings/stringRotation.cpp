//check if two strings are substrings of each other: waterbottle is a rotation of erbottlewat

#include <iostream>
#include <string>

using namespace std;

void check(string& first, string& second)
{
  if (first.size() != second.size())
  {
    cout << "False" << endl;
    return;
  }
  string concat = second + second;
  size_t pos = concat.find(first);
  if (pos != std::string::npos)
  {
    cout << "True" << endl;
    return;
  }  
  cout << "False" << endl;
}


int main()
{
  string first;
  string second;

  cin >> first >> second;
  check(first, second);
}
