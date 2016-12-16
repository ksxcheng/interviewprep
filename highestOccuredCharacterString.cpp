#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void check(string input)
{
  unordered_map<char, int> map_;
  int max = 0;
  char key;
  for (int i = 0; i < input.size(); i++)
  {
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
    if ((x.second) > max)
    {
      max = x.second;
      key = x.first;
    }
  }
  cout << "Highest occuring: " << key << endl;
}
int main()
{
  string input;
  cin >> input;
  check(input);

}
