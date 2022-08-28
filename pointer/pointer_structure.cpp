#include<iostream>
#include<stdlib.h>
using namespace std;

struct record
{
  string name;
  int age;
};

int main()
{
  record s[3],*ptr;
  ptr=s;

  for(int i=0;i<3;++i)
  {
    cout<<"Person "<<i+1<<"\n\n";
    cout<<"Enter Name: ";
    cin>>s[i].name;
    ptr->name;
    cout<<"Enter Age: ";
    cin>>s[i].age;
    ptr->age;
    system("cls");
  }

  system("cls");

  for(int c=0;c<3;++c)
  {
    cout<<"Person = "<<c+1<<"\n\n";
    cout<<"Name = "<<ptr->name<<endl;
	cout<<"Age = "<<ptr->age<<"\n\n";
	ptr++;
  }

}
