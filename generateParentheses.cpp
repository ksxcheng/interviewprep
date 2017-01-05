#include <iostream>
#include <string>
using namespace std;

void dfs(int num, int leftP, int rightP, string temp, string& paran)
{
  string copy = temp;
  if (rightP == num)
  {
    cout << "***" << endl;
    cout << temp << endl;
    cout << "leftP: " << leftP << endl;
    cout << "rightP: " << rightP << endl;
    cout << "****" << endl;
    return;
  }
    if (leftP < num)
    {
      temp+= "(";
      dfs(num, leftP + 1, rightP, temp, paran);
    }
    if (rightP < num)
    {
      temp+= ")";
      dfs(num, leftP, rightP + 1, temp, paran);
    }
}
void generate(int num)
{
  string paran = "()";
  dfs(num, 1, 0, "(", paran);
}

int main()
{
  int num;
  cout << "Enter total pairs: " << endl;
  cin >> num;
  generate(num);
}
