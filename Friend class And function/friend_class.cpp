#include<iostream>
using namespace std;

class nothing1
{
  string name="Jamshaid";

  public:
    friend class nothing2;

};

class nothing2
{
  public:

    void show(nothing1 n)
    {
      cout<<"My name is "<<n.name<<endl;
    }

};

int main()
{
  nothing1 n1;
  nothing2 n2;
  n2.show(n1);
}

