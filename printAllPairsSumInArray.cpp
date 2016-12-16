#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void printPairs(vector<int>& dick)
{
  unordered_map<int, int> map_;
  for (int i = 0; i < dick.size(); i++)
  {
    map_[dick[i]] = 0;
  }  
  for (int i = 0; i < dick.size() - 1; i++)
  {
    for (int j = i + 1; j < dick.size(); j++)
    {
      if (map_.count((dick[i] + dick[j])))
        cout << "Pair: " << dick[i] << " " << dick[j] << endl;
    }
  }
}
int main()
{
  vector<int> dick = {1,8,27,3,5,9,10,15,4,7,11, 6, 13}; 
  printPairs(dick); 
}
