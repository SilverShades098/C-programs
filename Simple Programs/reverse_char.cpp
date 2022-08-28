#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
   char name[100];
   int x=0;
   cout<<"Enter Name: ";
   cin.get(name,100);
   cout<<"\nReversed:\n\n";
   for(int a=0;a<20,name[a]!='\0';a++)
   {
      x++;
   }

   for(int a=x-1;a>=0;a--)
   {
     cout<<name[a];
   }

   cout<<endl;
}

