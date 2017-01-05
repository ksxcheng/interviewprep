#include <iostream>

using namespace std;
int main()
{
  int num = 54321;
  int answer = 0;
  while (num > 0)
  {
    int ones = num % 10;
    answer = answer * 10;
    answer += ones;
    num = num / 10;
  }
  cout << answer << endl;
}
