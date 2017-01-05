#include <iostream>

using namespace std;

void modify(int arr[][3], int m, int n)
{
  bool rows[m];
  bool cols[n];
 
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  } 
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i][j] == 0)
      {
        rows[i] = 1;
        cols[j] = 1;
      }  
    }
  }


  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (rows[i] == 1 || cols[j] == 1)
      {
                
        arr[i][j] = 0;
      }
    }
  }


  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int main()
{
  //int arr[][5] = { {1, 2, 3, 4, 6}, {6, 17, 0, 4, 7}, {2, 7, 9, 3, 8}, {11, 0, 21, 69, 9}, {41, 17, 5, 15, 10} };
  //int arr[][3] = {{10, 8, 0}};
  modify(arr, 1, 3);
}
