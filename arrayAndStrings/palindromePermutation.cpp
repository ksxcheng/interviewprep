#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;


void check(string& input)
{
  unordered_map<char, int> map_;
  int count = 0;
  for (int i = 0; i < input.size(); i++)
  {
    if (input[i] == ' ')
    {
      continue;
    }
    if (!(map_.count(input[i])))
    {
      map_[input[i]] = 1;
    }
    else
    {
      map_[input[i]]++;
    }
  }
  for (auto x: map_)
  {
    if (x.second %2 == 0)
    {
      ;
    }
    else if (x.second == 1)
    {
      count++;
      if (count > 1)
      {
        cout << "No" << endl;
        return;
      }
    }
    else
      cout << "No" << endl;
  }
  cout << "Yes" << endl;

}
int main()
{
  string input;
  getline(cin, input);
  check(input);

}
