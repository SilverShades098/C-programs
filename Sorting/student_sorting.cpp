#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  string name[3];
  float marks[3];
  for(int a=0;a<3;a++)
  {
    cout<<"Student "<<a+1<<"\n\n";
    cout<<"Enter name: ";
    cin>>name[a];
    cout<<"Enter marks: ";
    cin>>marks[a];
    system("cls");
  }

  cout<<"Select one of the following:\n\n";
  cout<<"1. Sorting in Descending Order\n";
  cout<<"2. Marks greater than 80\n\n";
  cout<<"Enter choice = ";
  int choice;
  cin>>choice;
  system("cls");

  switch(choice)
  {
    case 1:
    for(int a=0;a<3;a++)
    {
      for(int b=0;b<3;b++)
      {
        if(marks[a]>marks[b])
        {
          swap(marks[a],marks[b]);
          swap(name[a],name[b]);
        }
      }
    }

    cout<<"Name\t\tMarks\n\n";
    for(int a=0;a<3;a++)
    {
      cout<<name[a]<<"\t\t"<<marks[a]<<endl;
    }
    break;

    case 2:
    cout<<"Name\t\tMarks\n\n";
    for(int a=0;a<3;a++)
    {
      if(marks[a]>80)
      {
        cout<<name[a]<<"\t\t"<<marks[a]<<endl;
      }
    }
    break;

    default:
    cout<<"Invalid choice!\n";
  }

}

