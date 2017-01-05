//Given a digit string, return all possible letter combinations that the number could represent.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void parse(string digits, int depth, unordered_map<int, string>& map_, string temp)
{
  string copy = temp;
  if (depth == digits.size())
  {
    cout << temp << endl;
    return;
  }
  int key = digits[depth] - '0';
  string value = map_[key];
  for (int i = 0; i < value.size(); i++)
  {
    temp += value[i];
    parse(digits, depth + 1, map_, temp);
    temp  = copy;;
  }
}

void generate(string digits)
{
  unordered_map<int, string> map_;
  map_[1] = " ";
  map_[2] = "abc";
  map_[3] = "def";
  map_[4] = "ghi";
  map_[5] = "jkl";
  map_[6] = "mno";
  map_[7] = "pqrs";
  map_[8] = "tuv";
  map_[9] = "wxyz";

  parse(digits, 0, map_, "");  
}

int main()
{
  string digits;
  cin >> digits;

  generate(digits);
}
