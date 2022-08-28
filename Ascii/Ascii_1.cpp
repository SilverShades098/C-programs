#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  char name[20];
  cout<<"Enter a string:  ";
  cin>>name;

  int total=0;

  for(int a=0;name[a]!='\0';a++)
  {
    if(name[a]>='0'&&name[a]<='9')
    {
       if(name[a+1]>='0'&&name[a+1]<='9')
       {
         name[a]-='0';
         name[a+1]-='0';
         name[a]*=10;
         total+=name[a]+name[a+1];
       }

       else
       {
         total+=(name[a]-'0');
       }
     }
  }

  cout<<"\nTotal = "<<total<<endl;
}

