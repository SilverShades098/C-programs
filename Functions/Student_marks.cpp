/**
Write a class with tag student to input the name of student, marks of three subjects,
calculate the total marks and average marks.
**/
#include <iostream>
#include <stdlib.h>
using namespace std;

class student
{
   string name;
   float sub_marks[3],sum=0;
   public:
   void input()
   {
     cout<<"Enter Name: ";
     cin>>name;
     for(int a=0;a<3;a++)
     {
       cout<<"Enter Subject "<<a+1<<": ";
       cin>>sub_marks[a];
       sum+=sub_marks[a];
     }
   }
    void calculate()
    {
      cout<<"\nSum = "<<sum;
      cout<<"\nAverage = "<<sum/3<<endl;
    }

};

int main()
{
   student s;
   s.input();
   s.calculate();
}
