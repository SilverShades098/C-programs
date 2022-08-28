#include <iostream>
using namespace std;

int main()
{
   int x=7;
   int *ptr=&x;
   cout<<"Value of x = "<<*ptr;
   cout<<"\nAddress of x = "<<ptr<<endl;
}

