#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> first;
  vector<int> second;
  vector<int> third;

  first.assign(7,100); //7 ints with value 100
  //100,100,100,100,100,100,100
  vector<int>::iterator it;
  it = first.begin() + 1; 

  second.assign(it, first.end() - 1);
  //100,100,100,100,100
  int myints[] = {1775, 7, 4};
  third.assign(myints, myints + 3);
  //1775, 7
  cout << "Size of first: " << first.size() << endl;
  cout << "Size of second: " << second.size() << endl;
  cout << "Size of third: " << third.size() << endl;
 
  cout << "First contents: ";
  for (it = first.begin(); it != first.end(); it++)
  {
    cout << *it << " ";
  } 
  cout << endl;

  cout << "Second contents: ";
  for (it = second.begin(); it != second.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  cout << "Third contents: ";
  for (it = third.begin(); it != third.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  second.assign(10,40);
  cout << "new second.size() = " << second.size() << endl;
  cout << second.at(99) << endl;
  return 0;
}  

