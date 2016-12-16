#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void check(string word) 
{
  unordered_map<char, int> map_;
  for (int i = 0; i < word.size(); i++)
  {
    if (map_.count(word[i])) 
    {
      map_[word[i]]++;
    }
    else
    {
      map_[word[i]] = 1;
    }
  }  

  for (auto x: map_)
  {
    if (x.second > 1)
      cout << x.first << " ";
  }
  cout << endl;
}

int main()
{
  string word;
  cin >> word;
  check(word);
}
