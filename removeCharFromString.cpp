#include <iostream>
#include <string>

using namespace std;
void remove(string word, char ch)
{
  string answer;  
  for (int i = 0; i < word.size(); i++)
  {
    if (!(word[i] == ch))
      answer.push_back(word[i]);
  }
  cout << "Answer: " << answer << endl;
}
int main()
{
  char ch;
  string input;

  cin >> input;
  cin >> ch;

  remove(input, ch);
}
