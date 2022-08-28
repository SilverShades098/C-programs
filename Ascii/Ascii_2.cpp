#include <iostream>
using namespace std;

int main()
{
  char name[20];
  cout<<"Enter a string:  ";
  cin>>name;

  int total=0;
  int sum=0;

  for(int a=0;name[a]!='\0';a++)
  {
    if(name[a]>='0'&&name[a]<='9')
    {
      total++;
      name[a]-='0';
      sum+=name[a];
    }
  }

  cout<<"\nTotal numbers = "<<total;
  cout<<"\nSum = "<<sum<<endl;
}

