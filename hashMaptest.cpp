#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int  main()
{
  unordered_map<string,int> dick;
  dick.insert(make_pair<string,int>("hello", 5));
  dick.at("hello") = 6;
  cout << dick.at("hello") << endl;
  dick.at("olleh") = 10;
  return 0;
}  
