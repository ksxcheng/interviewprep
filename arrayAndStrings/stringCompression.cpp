// " Given a string "aaabbbcc", compress it, = "a3b3c2" . Given   that output string's length is always smaller than input string, you have do it inplace. No extra space "

#include <iostream>
#include <string>

using namespace std;

string check(string input)
{
  int count;
  char last;
  string compressed;
  for (int i = 0; i < input.size(); i++)
  {
    count = 0;
    last = input[i];
    int temp = i + 1;
    while (temp != input.size())
    {
      if (input[temp] == last)
      {
        temp++;
        count++;
        continue;
      }
      break;
    }
    compressed += last;
    compressed += to_string(count + 1);
    i = temp - 1;
  }
  if (input.size() > compressed.size())
    return compressed;
  return input;
}


int main()
{
  string input;
  cin >> input;
  cout << "Compressed: " << check(input) << endl;
}
