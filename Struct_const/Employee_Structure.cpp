#include <iostream>
#include <stdlib.h>
using namespace std;

struct employee
{
  string name;
  int id,salary;
};

int main()
{
  employee e[3];

  for(int a=0;a<3;a++)
  {
    cout<<"Employee "<<a+1<<"\n\n";
    cout<<"Enter name: ";
    cin>>e[a].name;
    cout<<"Enter ID: ";
    cin>>e[a].id;
    cout<<"Enter salary: ";
    cin>>e[a].salary;
    system("cls");
  }

  cout<<"Select one of the following:\n\n";
  cout<<"1. Search by Name of Person\n";
  cout<<"2. Sorting According to Salary\n\n";
  cout<<"Enter choice = ";
  int choice;
  cin>>choice;
  system("cls");

  switch(choice)
  {
    case 1:
    {
      cout<<"Enter Name: ";
      string name;
      cin>>name;
      for(int a=0;a<3;a++)
      {
        if(name==e[a].name)
        {
          cout<<"ID\tName\t\tSalary\n\n";
          cout<<e[a].id<<"\t"<<e[a].name<<"\t"<<e[a].salary<<endl;
        }
      }

    break;

    }

   case 2:
   {
     for(int a=0;a<3;a++)
    {
      for(int b=0;b<3;b++)
      {
        if(e[a].salary>e[b].salary)
        {
          swap(e[a].salary,e[b].salary);
          swap(e[a].id,e[b].id);
          swap(e[a].name,e[b].name);
        }
      }
    }

  cout<<"ID\tName\t\tSalary\n\n";
  for(int a=0;a<3;a++)
  {
    cout<<e[a].id<<"\t"<<e[a].name<<"\t"<<e[a].salary<<endl;
  }
  break;
  }

    default:
    cout<<"Invalid choice!\n";
  }

}

