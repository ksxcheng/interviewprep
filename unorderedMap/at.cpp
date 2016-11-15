#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
   std::unordered_map<std::string,int> mymap = {
                { "Mars", 3000},
                { "Saturn", 60000},
                { "Jupiter", 70000 } }; 
  mymap.at("Mars") = 3396;
  mymap.at("Saturn") += 5;
  mymap.at("Jupiter") = mymap.at("Saturn") + 9000;

  for(auto& x: mymap) {
    cout << x.first << ": " << x.second << endl;
  }
  cout << mymap.at("dick");
}  
