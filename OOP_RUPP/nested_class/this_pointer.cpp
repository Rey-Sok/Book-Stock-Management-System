#include <iostream>
using namespace std;
class Box
{
  public:
    Box(double l=0, double b=0, double h=0)
    {
      cout <<"Constructor called." << endl;
      length = l;
      breadth = b;
      height = h;
    }
    double Volume()
    {
      return length * breadth * height;
    }
    int compare(Box box)
    {
      return this->Volume() > box.Volume();
    }
  private:
    double length;
    double breadth;
    double height;
};//end of class
int main(void)
{
  Box Box1(7, 7, 7);    // Declare box1
  Box Box2(8.5, 6.0, 2.0);    // Declare box2
  if(Box2.compare(Box1))
  {
    cout << "Box2 is smaller than Box1" <<endl;
  }
  else
  {
    cout << "Box2 is equal to or larger than Box1" <<endl;
  }
}//end of main program