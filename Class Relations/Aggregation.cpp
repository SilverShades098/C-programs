#include <iostream>
using namespace std;

class information
{
  public:
    string name;
    int age;

    information(string name,int age)
    {
      this->name=name;
      this->age=age;
    }

};

class someone
{
  public:
    information i;

    someone(information i1) : i(i1)
    {

    }

    void display()
    {
      cout<<"Name = "<<i.name<<" and Age = "<<i.age<<endl;
    }

};

int main()
{
  information i("Jamshaid",19);
  someone s(i);
  s.display();
}

