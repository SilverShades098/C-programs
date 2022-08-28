#include <iostream>
#include <stdlib.h>
using namespace std;

class Box
{
   private:
   float length,breadth,height;
   public:
   void set_Length(float l)
   {
     length=l;
   }
   void set_Breadth(float b)
   {
     breadth=b;
   }
   void set_Height(float h)
   {
     height=h;
   }
   float get_Volume()
   {
     return length*breadth*height;
   }

   Box operator + (Box a)
   {
     Box b;
     b.length=length+a.length;
     b.breadth=breadth+a.breadth;
     b.height=height+a.height;
     return b;
   }
};

int main()
{
  Box b1,b2,sum;
  b1.set_Length(4.5);
  b1.set_Breadth(6.7);
  b1.set_Height(8.2);
  cout<<"Volume of Object 1 = "<<b1.get_Volume()<<endl;
  b2.set_Length(5.3);
  b2.set_Breadth(2.9);
  b2.set_Height(7.3);
  cout<<"Volume of Object 2 = "<<b2.get_Volume();
  sum=b1+b2;
  cout<<"\n\nAfter adding 2 objects:: Volume = "<<sum.get_Volume()<<endl;
}

