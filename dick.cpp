#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
    bool operator>(const Player& rhs) const
    {
        if (score > rhs.score)
          return true;
        else if (score < rhs.score)
        {
          return false;
        }
        else 
        {
	  if (name > rhs.name) 
          {
            return true;
          }
          return false;
        }
   }
    bool operator<(const Player& rhs) const
    {
        if (score < rhs.score)
          return true;
        else if (score < rhs.score)
        {
          return false;
        }
        else 
        {
          if (name < rhs.name) 
          {
            return true;
          }
          return false;
        }
   } 
}; 

int partition(vector<Player> &players, int left, int right, Player pivot) {
   while (left <= right)
    {
        while (players[left] < pivot) 
        {
            left++;
        } 
        while (players[right] > pivot)
        {
            right--;
        }
        if (left <= right)
        {  
              Player temp = players[left];
              players[left] = players[right];
              players[right] = temp;
              left++;
              right--; 
        }
    } 
    return left;
}


void quicksort(vector<Player> &players, int left, int right)
{ 
  if (left >= right)
  {
    return;
  }
  Player pivot = players[(left + right) / 2];
  int index = partition(players, left, right, pivot);
  quicksort(players, left, index - 1);
  quicksort(players, index, right);
}


vector<Player> comparator(vector<Player> players) {
  quicksort(players, 0, players.size() - 1);
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


