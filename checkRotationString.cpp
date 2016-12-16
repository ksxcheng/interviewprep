#include <iostream>
#include <string>

using namespace std;

void checkRotation(string s, string rotation)
{
  size_t pos = (s + s).find(rotation);
  if (pos != string::npos)
  {
    cout << "Yes, rotation!" << endl;
    return;
  }
  cout << "Not a rotation!" << endl;
}


int main()
{
  string input;
  cin >> input;

  string rotation;
  cin >> rotation;

  checkRotation(input, rotation);
}
