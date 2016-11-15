#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_set<string> myset = {"lakers", "kevin", "bob"};
  cout << "my set contains: ";
  unordered_set<string>::iterator it;
  for (it = myset.begin(); it != myset.end(); it++)
  {
    cout << *it << " " ;

  }
  cout << endl;
  myset.clear();
  myset.insert("bed");
  myset.insert("wardrobe");
  myset.insert("nightstand");
  for (auto& x: myset) {
    cout << x << " ";
    x += "dick";
  }
  cout << endl;
  return 0;
}
