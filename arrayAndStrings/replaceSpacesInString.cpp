//replace all spaces in string with %20

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void modify(string& input)
{
  stringstream ss(input);
  vector<string> tokens;
  string buf;
  string answer;

  while (ss >> buf)
  {
    tokens.push_back(buf);
    //cout << buf; 
  }
  for (int i = 0; i < tokens.size(); i++)
  {
    answer += tokens[i];
    answer += "%20";
    //cout << "Answer now: " << answer << endl;
  }
  answer.pop_back();
  answer.pop_back();
  answer.pop_back();
  cout << answer << endl;
}
int main()
{
  string input;
  getline(cin, input);
  modify(input);
}
