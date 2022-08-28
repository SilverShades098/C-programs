#include <iostream>
using namespace std;

int main()
{
  int no;
  cout<<"Enter number: ";
  cin>>no;

  int x[9];

  for(int a=8;a>=0;a--)
  {
    x[a]=no%10;
    no/=10;
  }

  cout<<"\nNumber = ";
  for(int a=0;a<9;a++)
  {
    if(x[a]!='\0'){cout<<x[a]<<" ";}
  }

  cout<<"\n\n";

}
