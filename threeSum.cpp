#include <vector>
#include <iostream>

using namespace std;

void quickSort(vector<int>& arr, int left, int right)
{
  int i = left; 
  int j = right;
  int temp;
  int pivot = arr[(left + right) / 2];
  while (i <= j) 
  {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot) 
     j--;
    if (i <= j)
    { 
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

void findThreeSum(vector<int>& arr, int& answer)
{
  int right;
  int left;

  for (int j = 0; j < arr.size(); j++)
  {
    cout << arr[j] << " ";
  }
  cout << "********" << endl;
  for (int i = 0; i < arr.size() - 2; i++)
  {
    right = arr.size() - 1;
    left = i + 1;
    while (left < right)
    {
      int sum = arr[i] + arr[left] + arr[right];
      cout << sum << endl;
      if (sum == answer) {
        cout << i << " " << left << " " << right << endl;
        return;
      }
      else if (sum > answer) {
        right--;
      }
      else {
        left++;
      }
   }
  }
  cout << "No answer" << endl;
}

int main()
{
  int vectorSize;
  vector<int> arr;
  int answer;
  cin >> answer;
  cin >> vectorSize;
  int userInput;
  for (int i = 0; i < vectorSize; i++)
  {
    cin >> userInput;
    arr.push_back(userInput);    
  }  

  quickSort(arr, 0, arr.size() - 1);
  findThreeSum(arr, answer);
}


