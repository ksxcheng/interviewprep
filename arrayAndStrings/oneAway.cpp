//Given two strings, write a function to determine if they are one edit (or zero) edits away
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;
void check(string first, string second)
{
  if (first.size() == second.size())
  {
    int count = 0;
    for (int i = 0; i < first.size(); i++)
    {
      if (first[i] != second[i])
      {
        cout << "first[i] : " << first[i] << " second[i] : " << second[i] << endl;
        count++;
      }
    }
    if (count > 1)
    {
      cout << "no" << endl;
    }
    else
    {
      cout << "yes" << endl;
    }
  }
  else //different sizes 
  {
    if (second.size() > first.size())
    {
      string temp = first;
      first = second;
      second = temp;
    }
    if (first.size() != second.size() + 1)
    {
      cout << "no" << endl;
      return;
    }
    else
    {
      for (int i = 0; i < second.size(); i++)
      {
        if (first[i] != second[i])
        {
          cout << "no" << endl;
          return;
        }
      } 
      cout << "yes" << endl; 
    }
  }
}



int main()
{
  string first;
  string second;
  cin >> first >> second;
  check(first, second);
}
