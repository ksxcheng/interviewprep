class Solution {
public:
void dfs(int num, int leftP, int rightP, string temp, int depth, vector<string>& answer)
{
  string copy = temp;
  if (depth == 2 * num)
  {
    answer.push_back(temp);
    return;
  }
  if (leftP < num)
  {
    temp+=  '(';
    dfs(num, leftP + 1, rightP, temp, depth + 1, answer);
  }
  temp = copy;
  if (rightP < num && rightP < leftP)
  {
    temp+= ')';
    dfs(num, leftP, rightP + 1, temp, depth + 1, answer);
  }
}

    vector<string> generateParenthesis(int n) {
        string temp;
        temp += "(";
        vector<string> answer;
        dfs(n, 1, 0, temp, 1, answer);
        return answer;
    }
};
