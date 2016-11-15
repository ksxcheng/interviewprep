#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    string aCopy = a;
    string bCopy = b;
    std::size_t found;
    int count = 0;
    int aSize = a.size();
    int bSize = b.size();
    for (int i = 0; i < a.size(); i++)
    {
        found = b.find(a.substr(i,1).c_str());
        if (found != string::npos)
        {
            //cout << "Found: " + found << endl;
            b.erase(b.begin() + found);
            a.erase(a.begin() + i);
            //cout << "B: " + b << endl;
            //cout << "A: " + a << endl;
            count += 2;
            //cout << count << endl;
            i--;
        }
    }
                       
    return (aSize + bSize - count);                   
            
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}


