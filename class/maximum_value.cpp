#include <iostream>
#include <stdlib.h>
using namespace std;

class record
{
   int num[5],high;

   public:
   void input()
   {
      for(int a=0;a<5;a++)
      {
        cout<<"Enter number "<<a+1<<": ";
        cin>>num[a];
      }
   }

    void find()
    {
       high=num[0];
      for(int a=1;a<5;a++)
      {
        if(num[a]>high){high=num[a];}
      }
    }

    void show()
     {
        cout<<"\nHigh = "<<high<<endl;
     }

};

int main()
{
   record s1;
   s1.input();
   s1.find();
   s1.show();
}

