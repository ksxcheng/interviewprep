#include <iostream>

using namespace std;

void answer(int arr[], int size)
{
  int smallest = arr[0];
  int largest = arr[0];

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
    else if (arr[i] > largest)
    {
      largest = arr[i];
    }  
  }
  cout << "Smallest: " << smallest << endl;
  cout << "Largest: " << largest << endl;
}

int main()
{
  int arr[] = {-1, 10, 2, 4, 5, 0, 9, 100, -5, 100};
  int size = sizeof(arr) / sizeof(arr[0]);
  answer(arr, size);
}
