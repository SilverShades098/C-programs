/**
Write a program using class to input values in to an array and find maximum value in the array.
The class should contain:
1. One data member to array of int type
2. One data member to store the max value
3. One member function to input data into array
4. One member function to find max value
5. One member function to print the max value
6. Member functions should be described outside the class.
**/

#include <iostream>
#include <stdlib.h>
using namespace std;

class find_max
{
   int no[5],maximum;
   public:
   void input();
   void max_value();
   void print();
};

void find_max::input()
{
  for(int a=0;a<5;a++)
  {
    cout<<"Enter no "<<a+1<<": ";
    cin>>no[a];
  }
}

void find_max::max_value()
{
  maximum=no[0];
  for(int a=1;a<5;a++)
  {
    if(no[a]>maximum) { maximum=no[a]; }
  }
}

void find_max::print()
{
  cout<<"\nMaximum value = "<<maximum<<endl;
}

int main()
{
  find_max f;
  f.input();
  f.max_value();
  f.print();
}
