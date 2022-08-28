#include <iostream>
using namespace std;

int main()
{
  int num,range;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"Enter Ending Range: ";
  cin>>range;
  cout<<endl;
  for(int a=range;a>=1;a--)
  {
    cout<<num<<" * "<<a<<" = "<<num*a<<endl;
  }
}

