#include <iostream>

using namespace std;

class A 
{
  public:
    void display() 
    {
      cout << "Hello!" << endl;
    }
};

class B: public A
{

};

class C: public B
{
  public:
  void display()
  {
    cout << "C's display() is called!" << endl;
  }
};

int main()
{
  C obj;
  obj.display();


}
