#include<iostream>
using namespace std;

class nothing
{
  string name="Jamshaid";

  public:
    friend void show(nothing n);
};

void show(nothing n)
{
  cout<<"My name is "<<n.name<<endl;
}

int main()
{
  nothing n;
  show(n);
}

