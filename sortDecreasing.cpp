#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Player {
  string name;
  int score;
};

struct sortByPlayer {
  bool operator()(Player& lhs, Player& rhs) {
    if (rhs.score > lhs.score)
      return rhs.score > lhs.score;
          
  }
  
};

int main() {
  vector<Player> players;
  Player player1;
  player1.name = "kevin";
  player1.score = 50;

  Player player2;
  player2.name = "bob";
  player2.score = 100;

  Player player3;
  player3.name = "kevin";
  player3.score = 80;

  Player player4;
  player4.name = "mac";
  player4.score = 1000;

  players.push_back(player1);
  players.push_back(player2);
  players.push_back(player3);
  players.push_back(player4);

  sort(players.begin(), players.end(), sortByPlayer());

  vector<Player>::iterator it;
  for(it = players.begin(); it != players.end(); it++)
  {
    cout << "Name: " << it->name << " Score: " << it->score << endl;
  }
  cout << endl;
  return 0;
}
