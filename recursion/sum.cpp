#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int sum(int no)
{
  if(no==0){return 0;}
  else{return no+sum(no-1);}
}

int main()
{
  cout<<sum(5);
}

