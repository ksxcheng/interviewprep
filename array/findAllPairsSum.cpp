//Find all pairs on integer array whose sum is equal to given number

#include <iostream>
#include <unordered_map>
using namespace std;

void findAllPairs(int arr[], int size, int num)
{
  unordered_map<int, int> map_;
  for (int i = 0; i < size; i++)
  {
    if (!(map_.count(arr[i])))
    {
      map_[arr[i]] = i;
    }
  }
  for (int i = 0; i < size; i++)
  {
    int find = num - arr[i];
    if (map_.count(find))
    {
      map_.erase(find);
      map_.erase(arr[i]);
      cout << "First: " << find << " " << "Second: " << arr[i] << endl;
    }
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int num = 9;
  findAllPairs(arr, size, num);
}
