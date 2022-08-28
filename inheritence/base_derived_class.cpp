/**
Create a base class shape with two protected members width,height and two public member functions
set_width and set_height with 1 argument each. Create derived class rectangle having public member
function get_area that returns area of rectangle.
**/

#include <iostream>
using namespace std;

class shape
{
   protected:
   int width,height;
   public:
   void set_width(int a)
   {
     width=a;
   }
   void set_height(int b)
   {
     height=b;
   }
};

class rectangle:public shape
{
   public:
   int get_area()
   {
     return width*height;
   }
};

int main()
{
  rectangle r;
  r.set_width(3);
  r.set_height(6);
  cout<<"Area of rectangle = "<<r.get_area()<<endl;
}

