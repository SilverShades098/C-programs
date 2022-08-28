#include <iostream>
using namespace std;
int main()
{
  int range,sum=0;
  cout<<"Enter Ending Range: ";
  cin>>range;
  cout<<"\nSeries: ";
  for(int a=0;a<=range;a++)
  {
    cout<<a;
    sum+=a;
    if(a<range)
    {
       cout<<" + ";
    }
  }

  cout<<"\n\nSum = "<<sum<<endl;
}

