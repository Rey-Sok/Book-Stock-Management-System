#include <iostream>

using namespace std;

class Cube
{
  public:
    static int x;
    Cube( int W ): y(W) {}   // cube (int w){y=w;}
    
    static void Display ()
    {
      cout <<"Height of all objects is = " <<z<<endl;
    }
    int surface_area( );
    int volume( );
  private:
    int y;
    static int z ; // static variable
};    // end of class

int Cube :: x = 10;
int Cube :: z = 5;
int Cube::surface_area()
{
  return 2*(x*y +y*z +z*x);
}
int Cube::volume()
{
  return x*y*z ;
}
int main(void)
{
  Cube C1(6), C2(3) ;
  cout << "C1.x = " << C1.x << ", C2.x = "<<C2.x <<endl;
  Cube :: Display(); // function call without an object
  cout<<"Volume of cuboid C1 ="<< C1.volume()<<endl;
  cout<<"Volume of cuboid C2 ="<< C2.volume()<<endl;
  cout<<"surface area of C1 = "<< C1.surface_area()<<endl;
  cout<<"surface area of C2 = "<< C2.surface_area()<<endl;
}