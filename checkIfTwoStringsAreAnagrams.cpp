#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void checkAnagram(string first, string second)
{
  unordered_map<char, int> map_;
  for (int i = 0; i < first.size(); i++)
  {
    if (!(map_.count(first[i])))
    {
      map_[first[i]] = 1;
    }
    else 
    {
      map_[first[i]]++;
    }
  }

  for (int i = 0; i < second.size(); i++)
  {
    if(!(map_.count(second[i])))
    {
      cout << "Not anagrams" << endl;
      return;
    }
    else
    {
      if (map_[second[i]] < 1)
      {
        cout << "Not anagrams" << endl;
        cout << "second[i] is " << second[i] << endl;
        cout << "index is " << i << endl;
        return;
      }
      map_[second[i]]--;
    }
  }
  cout << "Yes, anagrams!!" << endl;
}
int main()
{
  string first;
  string second;

  cin >> first >> second;

  checkAnagram(first, second);
}
