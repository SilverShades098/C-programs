#include <iostream>
using namespace std;

class distance
{
  int feet,inch;
  public:
  void input(int f,int i)
  {
    feet=f;
    inch=i;
  }

  distance operator + (distance d)
  {
    distance h;
    h.feet=feet+d.feet;
    h.inch=inch+d.inch;
    return h;
  }

  void show()
  {
    if(inch>11)
    {
      feet++;
      inch-=12;
    }
    cout<<"Feet = "<<feet<<"  "<<"Inches = "<<inch<<endl;
  }

};

int main()
{
  class distance d1,d2,sum;
  d1.input(6,9);
  d2.input(4,7);
  sum=d1+d2;
  sum.show();
}

