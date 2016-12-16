#include <iostream>

using namespace std;

int getMissingNo(int arr[], int size)
{
  int arrxor = 0;
  int totalxor = 0;
  for (int i = 1; i <= size + 1; i++)
  {
    totalxor = totalxor ^ i;
  }
  for (int i = 0; i < size; i++)
  {
    arrxor = arrxor ^ arr[i];
  }
  return arrxor ^ totalxor;
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << getMissingNo(arr, size) << endl;
}
