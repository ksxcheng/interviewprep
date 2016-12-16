#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void checkValidShuffle(string word1, string word2, string word3)
{
  unordered_map<char, int> map_;
  for (int i = 0; i < word1.size(); i++)
  {
    if (!(map_.count(word1[i])))
    {
      map_[word1[i]] = 1;
    }
    else
    {
      map_[word1[i]]++;
    }
  }
  for (int i = 0; i < word2.size(); i++)
  {
    if (!(map_count; i < word2.size(); i++)
    {
      map_[word2[i]] = 1;
    
    else
    {
      map_[word2[i]]++;
    }
  }
  for (int i = 0; i < word3.size(); i++)
  {
    if (map
  }
}
int main()
{
  string word1;
  string word2;
  string word3;

  cin >> word1;
  cin >> word2;
  cin >> word3;

  checkValidShuffle(word1, word2, word3);
}
