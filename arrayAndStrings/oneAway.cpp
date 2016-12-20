//Given two strings, write a function to determine if they are one edit (or zero) edits away
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;
void check(string& first, string& second)
{
  if (first.size() == second.size() + 1)
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
      }}
    for (int i = 0; i < second.size(); i++)
    {
      if (map_.count(second[i]))
      {
        if (map_[second[i]] <= 0)
        {
          cout << "No" << endl;
          return;
        }
        map_[second[i]]--;
        continue;
      } 
      else 
      {
        cout << "No" << endl;
        return;
      }
    }
    cout << "true" << endl;
  }
  else if (second.size() == first.size() + 1)
  {
    unordered_map<char, int> map_;
    for (int i = 0; i < second.size(); i++)
    {
      if (!(map_.count(second[i])))
      {
        map_[second[i]] = 1;
      }
      else
      {
        map_[second[i]]++;
      }
    }
    for (int i = 0; i < first.size(); i++)
    {
      if (map_.count(first[i]))
      {
        if (map_[first[i]] <= 0)
        {
          cout << "No" << endl;
          return;
        }
        map_[first[i]]--;
        continue;
      }
      else
      {
        cout << "No" << endl;
        return;
      }
    }
    cout << "true" << endl;
  }
  else if (first.size() == second.size())
  {
    int count = 0;
    for (int i = 0; i < first.size(); i++)
    {
      if (first[i] == second[i])
      {
        ;
      }
      else
      {
        count++;
      }
    }
    if (count > 1)
    {
      cout << "No" << endl;
      return;
    }
    cout << "true" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
int main()
{
  string first;
  string second;
  cin >> first >> second;
  check(first, second);
}
