#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int a=7;
  int *ptr=&a;
  int **ptr1=&ptr;
  cout<<**ptr1;
}

