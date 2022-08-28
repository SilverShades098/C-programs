#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  string name[3];
  float salary[3];
  for(int a=0;a<3;a++)
  {
    cout<<"Employee "<<a+1<<"\n\n";
    cout<<"Enter name: ";
    cin>>name[a];
    cout<<"Enter salary: ";
    cin>>salary[a];
    system("cls");
  }

  cout<<"Select one of the following:\n\n";
  cout<<"1. Sorting in Ascending Order\n";
  cout<<"2. Highest Salary\n\n";
  cout<<"Enter choice = ";
  int choice;
  cin>>choice;
  system("cls");

  switch(choice)
  {
    case 1:
   {
     for(int a=0;a<3;a++)
    {
      for(int b=0;b<3;b++)
      {
        if(salary[a]<salary[b])
        {
          swap(salary[a],salary[b]);
          swap(name[a],name[b]);
        }
      }
    }

  cout<<"Name\t\tSalary\n\n";
  for(int a=0;a<3;a++)
  {
    cout<<name[a]<<"\t"<<salary[a]<<endl;
  }
  break;
  }


    case 2:
    {
      float high_s=salary[0];
      string high_n;
      for(int a=1;a<3;a++)
     {
       if(salary[a]>high_s)
       {
         high_s=salary[a];
         high_n=name[a];
       }
     }

    cout<<"Name\t\tSalary\n\n";
    cout<<high_n<<"\t"<<high_s<<endl;
    break;

    }

    default:
    cout<<"Invalid choice!\n";
  }

}

