#include<iostream>
using namespace std;

int fibacconi(int num)
{
  int a=0,b=1;
  if(num==1){return a;}
  if(num==2){return a,b;}

  else
  {
    return (fibacconi(num-1)+fibacconi(num-2));
  }

}

int main()
{
  int n;
  cout<<"Enter total steps: ";
  cin>>n;

  cout<<"\nFibaconni series = ";
  for(int a=1;a<=n;a++)
  {
    cout<<fibacconi(a)<<" ";
  }

  cout<<endl;
}

