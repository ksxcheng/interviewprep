#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
  string input;
  cin >> input;
  vector<char> unique;
  unordered_map<char, int> map_;
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

  for (int i = 0; i < input.size(); i++)
  {
    if (map_[input[i]] ==1) 
    {
      cout << input[i] << endl;
      //break;
    }
  }
  
}
