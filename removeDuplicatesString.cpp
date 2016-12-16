#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string removeDuplicates(string s)
{
  string answer;
  unordered_map<char, int> map_;
  for (int i = 0; i < s.size(); i++)
  {
    if (!(map_.count(s[i])))
    {
      map_[s[i]] = 1;
    }
    else
    {
      map_[s[i]]++;
    }
  }
  for (int i = 0; i < s.size(); i++)
  {
    if (map_.count(s[i]))
    {
      answer.push_back(s[i]);
      map_.erase(s[i]);
    }
  }
  return answer;
}

int main()
{
  string input;
  cin >> input;
  cout << "Removed Duplicates: " << removeDuplicates(input) << endl;
}
