#include <iostream>
#include <string>

using namespace std;

bool checkString(string &first, string& second, string& check)
{
  if (first.size() + second.size() != check.size())
    return false;
  int first_index = 0;
  int second_index = 0;
  for (int i = 0; i < check.size(); i++)
  {
    if (check[i] == first[first_index])
    {
      first_index++;
    }
    else if (check[i] == second[second_index])
    {
      second_index++;
    }
    else
    {
      return false;
    }
  }
  return true; 
}


int main()
{
  string first = "ab";
  string second = "cd";
  string check = "acbd";
 
  cout << checkString(first, second, check);
}
