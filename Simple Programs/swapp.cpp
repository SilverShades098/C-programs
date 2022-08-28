#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int &x,int &y);

int main()
{
  int a,b;

  cout<<"Enter 1st value: ";
  cin>>a;
  cout<<"Enter 2nd value: ";
  cin>>b;

  cout<<"\nBefore Swapping\n";
  cout<<"1st value = "<<a<<"  2nd value = "<<b<<endl;

  swap(a,b);

  cout<<"\nAfter Swapping\n";
  cout<<"1st value = "<<a<<"  2nd value = "<<b<<endl;
}

void swap(int &x,int &y)
{
  int temp=x;
  x=y;
  y=temp;
}

