#include <iostream>
#include <stdlib.h>
using namespace std;

class item
{
  protected:
  int no;
  float price;
  string name;
};

class discount_item:protected item
{
  public:
    discount_item()
  {
    no=0;
    price=0;
  }
    void input()
    {
      cout<<"Enter Item-No: ";
      cin>>no;
      cout<<"Enter Item-name: ";
      cin>>name;
      cout<<"Enter Item-price: ";
      cin>>price;
      system("cls");
    }

    discount_item operator + (discount_item x)
    {
      discount_item y;
      y.price=price+x.price;
      return y;
    }

    void show()
    {
      cout<<no<<"\t"<<name<<"\t"<<price<<"\n";
    }

    void total()
    {
       cout<<"\nTotal price = Rs. "<<price<<endl;
       cout<<"\nAfter discount of 10 %\n";
       cout<<"Price = Rs. "<<price-(price/100)*10<<endl;
    }

};

int main()
{
  discount_item d[3],t;

  for(int a=0;a<3;a++)
  {
    d[a].input();
  }


  cout<<"Item-No\tName\tPrice\n\n";
  for(int a=0;a<3;a++)
  {
    d[a].show();
  }

   t=d[0]+d[1]+d[2];
   t.total();
}

