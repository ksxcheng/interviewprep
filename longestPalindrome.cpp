#include <iostream>
#include <stack>
#include <unordered_map>
#include <algorithm> //std::reverse

using namespace std;

string longestPalindrome(string s) {
  if (s.size() == 1)
  {
    return s;
  }

  for (int i = 0; i < s.size(); i++) {
    cout << "called " << endl; 
   
  }

  unordered_map<char, int> map_;
  stack<char> stack_;
  string answer;
  for (int i = 0; i < s.size(); i++)
  {
    stack_.push(s[i]);
    if (!map_.count(s[i]))
    {
      map_[s[i]] = 0;
    } 
    else if (map_[s[i]] == 1) 
    {
      map_[s[i]]++;
      int j = i - 1;
      while (j > 0)
      {
        if (s[j] == s[i]) break;
        j--;
      }
      cout << "J : " << j << endl;
      cout << "I : " << i << endl;
      string dick = longestPalindrome(s.substr(j+1, i-j-1));
      if (dick == "none")  {return "none";}
      else 
      {
            answer.push_back(s[i]);
      stack_.pop();
          for (int z= 0; z < i-j; z++)
          {
            stack_.pop();
          }
        i = i+ 1;
        while (!stack_.empty() && stack_.top() == s[i])
        {
          answer.push_back(s[i]);
          stack_.pop();
          if (stack_.size() == i + 1)
            break;
          i++; 
        }
        if (answer.size() == 0)
          return "none";
        else {
          string copy(answer);
          reverse(copy.begin(), copy.end());  
          return  copy + dick + answer;
        } 
     }
   }
   return "none";  
  }
}

int main() {
  string check = "iiidiii";
  cout << longestPalindrome(check);
  cout << endl;
}
