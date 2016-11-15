#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
  unordered_map<string, string> mine = {{"lakers", "good"}, {"warriors", "bad"}};  for (auto&x: mine) 
  {
    cout << x.first << ": " << x.second << endl;
  }
  unordered_map<string, string>::iterator it;
  for (it = mine.begin(); it != mine.end(); it++)
  {
    cout << it->first << ": " << (*it).second << endl;
  }
  
  if (mine.count("fucku") > 0)
  {
    cout << "lakers key is inside" << endl;
  }
  else 
  {
    cout << "key not inside" << endl;
  }
  mine.emplace("kevin", "john");
  mine.emplace("kevin", "fucker");
  cout << mine.at("kevin") << endl;

  return 0;
}
