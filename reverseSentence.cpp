/*REVERSE SENTENCE */

#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;


string reverse(string sentence)
{
  string answer;
  string buf;
  vector<string> tokens;
  stringstream ss(sentence);

  while (ss >> buf)
    tokens.push_back(buf);
  int left = 0;
  int right = tokens.size() - 1;
  while (left != right)
  {
    string temp = tokens[left];
    tokens[left] = tokens[right];
    tokens[right] = temp;
    left++;
    right--;
  }
  for (int i = 0; i < tokens.size(); i++)
  {
    answer += tokens[i];
    answer += " ";
  }
  return answer;
}

int main()
{
  string sentence;
  cout << "Enter sentence to be reversed: ";
  getline(cin, sentence);
  cout << reverse(sentence) << endl;

}
