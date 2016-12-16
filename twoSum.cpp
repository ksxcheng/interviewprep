#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class IceCream {
 
    public: 
        int flavor; 
        int index;

        IceCream(int flavor, int index) {
            this->flavor = flavor;
            this->index = index;
       }
};
    

int main() {
    int target;
    int count;
    cin >> target;
    cin >> count;

    vector<int> answer;
    vector<IceCream> arr;
        
        for (int i = 0; i < count; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i));
        }
   unordered_map<int, int> map_; 
   for (int i= 0; i < count; i++)
   {   
     map_[arr.at(i).flavor] = i; 
   }
  
   for (auto& x: map_)
   {
     int complement = target - x.first;
     if (map_.count(complement) && (map_.at(complement) != x.second))
     {
       answer.push_back(map_.at(complement));
       answer.push_back(x.second);
     }
   }
   cout << min(answer[0], answer[1]) << " " << max(answer[0], answer[1]);
}
