#include <iostream>

using namespace std;

int getMissingNo(int arr[], int size)
{
  int total = (arr[size - 1] * (arr[size - 1] + 1)) / 2;
  for (int i = 0; i < size; i++)
  {
    total -= arr[i];
  }
  return total;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11};
  int miss = getMissingNo(arr, sizeof(arr) / sizeof(arr[0]));
  cout << miss << endl;

}
