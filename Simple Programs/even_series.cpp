#include <iostream>
using namespace std;
int main()
{
  int n,i=0;
  cout<<"Enter any number: ";
  cin>>n;
  cout<<"\nSeries: ";
  while(i<=n)
  {
    cout<<i;
    i+=2;
    if(i<=n)
    {
      cout<<" , ";
    }
  }

  cout<<endl;
}

