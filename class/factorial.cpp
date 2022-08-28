#include <iostream>
#include <stdlib.h>
using namespace std;

class factorial
{
   int fact;

   public:
    int input(int no)
    {
      fact=no;
      for(int a=no-1;a>=1;a--)
      {
        fact*=a;
      }

        return fact;
    }

};

int main()
{
   factorial x;
   cout<<"Factorial = "<<x.input(6)<<endl;
}

