#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void determine(string& input)
{
  unordered_map<char, int> map_;
  for (int i = 0; i < input.size(); i++)
  {
    if (!(map_.count(input[i])))
    { 
      map_[input[i]] = 1;
    }
    else
    {
      cout << "False" << endl;
      return;
    }
  }  
  cout << "True" << endl;
}
int main()
{
  string input;
  cin >> input;
  determine(input);
}
