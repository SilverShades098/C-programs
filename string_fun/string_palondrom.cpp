#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str1[10],str2[10];

  cout<<"Enter the string: ";
  cin>>str1;
  cout<<endl;

  strcpy(str2,str1);
  strrev(str2);

  if(strcmp(str1,str2)==0)
  {
    cout<<str1<<" is a palindrome";
  }

  else
  {
    cout<<str1<<" is not a palindrome";
  }

  cout<<endl;
}
