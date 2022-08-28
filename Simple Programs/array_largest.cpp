#include <iostream>
using namespace std;
int main()
{
  int array[5]={32,54,17,86,24};
  for(int a=0;a<5;a++)
  {
    for(int b=0;b<5;b++)
    {
        if(array[a]<array[b])
        {
            swap(array[a],array[b]);
           /*
           int temp=array[a];
           array[a]=array[b];
           array[b]=temp;
           */
        }
    }
  }

  for(int a=0;a<5;a++)
  {
    cout<<array[a]<<" ";
  }
}
