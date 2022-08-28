#include <iostream>
using namespace std;
int main()
{
  int marks,sum=0,choice;
  do
  {
    cout<<"Enter Marks: ";
    cin>>marks;
    sum+=marks;
    cout<<"\nWant to Enter more Marks:\nEnter 1 for yes and 2 for no\n\n";
    cout<<"Choice = ";
    cin>>choice;
    cout<<"\n";
  }
  while(choice==1);
  cout<<"Sum = "<<sum<<endl;
}

