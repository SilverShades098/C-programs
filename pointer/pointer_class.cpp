#include <iostream>
using namespace std;

class nothing
{
   int a,b;
   public:
   void input()
   {
       cout<<"Enter value of A ";
       cin>>a;
       cout<<"Enter value of B ";
       cin>>b;
   }

   void show()
   {
      cout<<"\nValue of A is "<<a;
      cout<<"\nValue of B is "<<b<<endl;
   }

};

int main()
{
  nothing x,*ptr;
  ptr=&x;
  x.input();
  ptr->show();
}

