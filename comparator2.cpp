#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

struct dick{
  bool operator() (Player& a, Player& b)
  {
    if (a.score == b.score)
    {
      return a.name < b.name;
    }
    else {
      return !(a.score < b.score);
    }
  }
};

dick sortByPlayer;
vector<Player> comparator(vector<Player> players) {
  sort(players.begin(), players.end(), sortByPlayer); 
  return players;
}

int main() {
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    } 
  return 0;
}
