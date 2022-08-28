#include <iostream>
#include <stdlib.h>
using namespace std;

class shape
{
   protected:
   float width,height;
   public:
   void set_width(float w)
   {
     width=w;
   }
   void set_Height(float h)
   {
     height=h;
   }
};

class Rectangle:public shape
{
   public:
   float get_Area()
   {
     return width*height;
   }
};

int main()
{
  Rectangle r;
  r.set_width(5.6);
  r.set_Height(7.8);
  cout<<"Area of Rectangle = "<<r.get_Area()<<endl;
}

