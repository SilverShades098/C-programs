#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  int array[5]={34,27,86,12,65};
  int *ptr=array;
  for(int a=0;a<5;a++)
  {
    cout<<*ptr<<"  "<<ptr<<endl;
    cout<<array[a]<<"  "<<&array[a]<<"\n\n";
    ptr++;
  }
}

