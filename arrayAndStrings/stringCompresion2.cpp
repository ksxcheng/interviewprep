#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void check(string a)
{
  char seen = a[0];
  int count = 0;
  string answer;
  for (int i = 0; i < a.size(); i++)
  {
    while (a[i] == seen)
    {
      i++;
      count++;
    }
    answer += seen;
    answer = answer + to_string(count);
    count = 0;
    seen = a[i];
    i--;
  }
  cout << answer << endl;
}


int main()
{
  string a;
  cin >> a;
  check(a);
}
