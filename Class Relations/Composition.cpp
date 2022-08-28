#include <iostream>
using namespace std;

class Birthday
{
  int month,day,year;
  public:
    Birthday(int m,int d,int y)
    {
      month=m;
      day=d;
      year=y;
    }

    void printDate()
    {
      cout<<month <<" / " <<day <<" / " <<year <<endl;
    }

};

class People
{
  string name;
  Birthday d;
  public:
    People(string n,Birthday c) : d(c)
    {
        name=n;
    }

    void show()
    {
      cout<<name<<" was born on:  ";
      d.printDate();
    }

};


int main()
{
  Birthday b(23,12,1999);
  People p("Jamshaid",b);
  p.show();
}

