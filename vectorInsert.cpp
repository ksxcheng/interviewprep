#include <iostream>
#include <vector>

using namespace std;
int main()
{
  vector<int> myvector(3,100);
  //100,100,100
  vector<int>::iterator it;

  it = myvector.begin();
  it = myvector.insert(it, 200);
  //200,100,100, 100
  myvector.insert(it, 2, 300);
  //300,300,200,100,100, 100

  vector<int> anothervector(2,400); //400,400
  myvector.insert(it+2, anothervector.begin(), anothervector.end());
  //
  vector<int>::iterator it1;
  vector<int>::iterator it2;

  cout << "Myvector contents: ";
  for (it1 = myvector.begin(); it1 != myvector.end(); it1++)
  {
    cout << *it1 << " ";
  }
  cout << endl;

  
  cout<< "Anothervector contents: ";
  for (it2 = anothervector.begin(); it2 != anothervector.end(); it2++)
  {
    cout << *it2 << " ";
  }
  cout << endl;
  return 0;
}
