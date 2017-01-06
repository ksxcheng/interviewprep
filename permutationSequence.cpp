#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    void dfs(string current, int depth, string values, vector<string>& answer, unordered_map<char, int> map_)
    {
        bool changed = false;
        if (depth == values.size())
        {
            answer.push_back(current);
            return;
        }
        for (int i = 0; i < values.size(); i++)
        {
            if (map_.count(values[i]))
            {
                current+= values[i];
                changed = true;
                map_.erase(values[i]);
                dfs(current, depth + 1, values, answer, map_);
                map_[values[i]] = 1;
                current.pop_back();
            }
        }
    }
    string getPermutation(int n, int k) {
        string values;
        unordered_map<char, int> map_;
        vector<string> answer;

        for (int i = 1; i <= n; i++)
        {
          values = values + to_string(i); 
          map_[i + '0'] = 1;
        }
        dfs("", 0, values, answer, map_);
        cout << answer[k - 1];
        return answer[k-1];
    }
};

int main()
{
  Solution a;
  int n;
  int k;
  cin >> n >> k;
  a.getPermutation(n, k);
}
