#include <iostream>
using namespace std;

int factorial(int n)
{
  if(n<=1)
  {
    return n;
  }

  else
  {
    return n*factorial(n-1);
  }

}

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<"\nFactorial of " << n <<" = " << factorial(n)<<endl;
}

