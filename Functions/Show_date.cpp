/**
Write a class with tag date, with three data members date, month and year, input values from user
using one member functions and another member function to display the result.
**/
#include <iostream>
#include <stdlib.h>
using namespace std;

class date
{
   int date,month,year;
   public:
   void input()
   {
     cout<<"Enter Date: ";
     cin>>date;
     cout<<"Enter Month: ";
     cin>>month;
     cout<<"Enter Year: ";
     cin>>year;
   }
    void display()
    {
      cout<<"\nDate: "<<date;
      cout<<"\nMonth: "<<month;
      cout<<"\nYear: "<<year<<endl;
    }

};

int main()
{
   date d;
   d.input();
   d.display();
}
