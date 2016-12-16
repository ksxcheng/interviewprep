#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class Solution {
  public:
    string decodeString(string s)
    {
      cout << "decodeString called with " << s << endl;
      if (s.size() == 0)
        return "";
      if (!(contains_non_alpha(s)))
      {
        cout << "inside first if" << endl;
        cout << s.substr(1, s.size() - 2) << endl;
        return s.substr(1, s.size() - 2);
      }
      else if (isdigit(s[0]))
      {
        cout << "inside else if " << endl;
        string answer;
        string temp = decodeString(s.substr(1, s.size() - 1));
        for (int i = 0; i < stoi(s.c_str()); i++)
        {
          answer += temp;
        }
        return answer;
      }
      else
      {
        cout << "inside else statement" << endl;
        int i = 0;
        for (; i < s.size(); i++)
        {
          if (isdigit(s[i]))
            break;
        }
        return s.substr(1, i - 1) + decodeString(s.substr(i, s.size() - i - 1));
      }
    }
  private:
    bool contains_non_alpha(string& s)
    {
      return s.find_first_not_of("[]abcdefghijklmnopqrstuvwxyz") != std::string::npos;
    }
};

int main()
{
  Solution dick;
  cout << dick.decodeString("2[abc]3[cd]ef") << endl;
  //cout << dick.decodeString("3[ac]") << endl;
  //out << dick.decodeString("3[a2[c]]") << endl;
}

public class Solution {
    public String decodeString(String s) {
        Stack<Integer> count = new Stack<>();
        Stack<String> result = new Stack<>();
        int i = 0;
       result.push("");
        while (i < s.length()) {
            char ch = s.charAt(i);
            if (ch >= '0' && ch <= '9') {
                int start = i;
                while (s.charAt(i + 1) >= '0' && s.charAt(i + 1) <= '9') i++;
                count.push(Integer.parseInt(s.substring(start, i + 1)));
            } else if (ch == '[') {
                result.push("");
            } else if (ch == ']') {
                String str = result.pop();
                StringBuilder sb = new StringBuilder();
                int times = count.pop();
                for (int j = 0; j < times; j += 1) {
                    sb.append(str);
                }
                result.push(result.pop() + sb.toString());
            } else {
                result.push(result.pop() + ch);
            }
            i += 1;
        }
        return result.pop();
    }
}
