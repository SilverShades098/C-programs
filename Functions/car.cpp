/**
Write a class with tag parts, having three data member( model_no, part_no, and price),
use a member function to set value in the  data members using arguments and another member
function to display the values.
**/
#include <iostream>
#include <stdlib.h>
using namespace std;

class parts
{
   int model_no,part_no,price;
   public:
   void set_value()
   {
     cout<<"Enter Model No: ";
     cin>>model_no;
     cout<<"Enter Part No: ";
     cin>>part_no;
     cout<<"Enter Price: ";
     cin>>price;
   }

    void display()
    {
      cout<<"\nModel No: "<<model_no;
      cout<<"\nPart No: "<<part_no;
      cout<<"\nPrice: "<<price<<endl;
    }

};

int main()
{
   parts p;
   p.set_value();
   p.display();
}
