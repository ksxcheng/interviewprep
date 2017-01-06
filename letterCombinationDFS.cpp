#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void dfs(string& digits, int depth, vector<string>& answer, unordered_map<int,string>& map_, string current)
{
  if (depth == digits.size())
  {
    answer.push_back(current);
  }
  int key = digits[depth] - '0';
  string value = map_[key];
  for (int i = 0; i < value.size(); i++)
  {
    current+= value[i];
    dfs(digits, depth + 1, answer, map_, current);
    current.pop_back();
  }
}
void generate(string digits, vector<string>&answer)
{
  unordered_map<int, string> map_;
  map_[1] = "";
  map_[2] = "abc";
  map_[3] = "def";
  map_[4] = "ghi";
  map_[5] = "jkl";
  map_[6] = "mno";
  map_[7] = "pqrs";
  map_[8] = "tuv";
  map_[9] = "wxyz";
  dfs(digits, 0, answer, map_, "");
}
int main()
{
  string digits;
  cout << "Enter digit string: " << endl;
  cin >> digits;
  vector<string> answer;
  generate(digits, answer);
  for (int i = 0; i < answer.size(); i++)
  {
    cout << answer[i] << endl;
  }
}
