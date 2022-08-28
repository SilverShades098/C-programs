#include <iostream>
#include <stdlib.h>
using namespace std;

class bakery
{
  protected:
  int choice1,choice2,choice3;
  public:
  void menu();
};

class cake:public bakery
{
  int price=0,size,dognut=100;
  string type;
  public:
      void input();
      void vanilla();
      void chocolate();
      void banana();
      void custom_cake();
      void ask_dognut();
};

int main()
{
  cake c;
  c.menu();
  c.input();
}

void bakery:: menu()
  {
    cout<<"\t\tWelcome To JJ Bakery\n\n\n";
    cout<<"Select one of Following\n\n";
    cout<<"1. Order from Menu\n";
    cout<<"2. Order your Own (Extra Charges = Rs. 200)\n\n";
    cout<<"Your choice = ";
    cin>>choice1;
    system("cls");
  }

  void cake::input()
  {

    switch(choice1)
    {
      case 1:
      {
        cout<<"Select from Menu\n\n";
        cout<<"1. Chocolate Cake\n";
        cout<<"2. Banana Cake\n";
        cout<<"3. Vanilla Cake\n\n";
        cout<<"Your choice = ";
        cin>>choice2;
        system("cls");
        switch(choice2)
        {
          case 1:
          {
            chocolate();
            break;
          }

          case 2:
          {
            banana();
            break;
          }

        case 3:
        {
          vanilla();
          break;
        }
      default: { cout<<"Invalid Choice\n"; }
       }
    break;
      }

        case 2:
        {
          custom_cake();
        }
    }

  }


 void cake:: banana()
{
       cout<<"You Selected Banana Cake\n";
       cout<<"(Per Pound = Rs.150)\n\n";
       cout<<"Enter Cake Size: ";
       cin>>size;
          for(int a=1;a<=size;a++)
          {
            price+=150;
          }

        system("cls");
        cout<<"Your Order is Banana Cake ("<<size<<" Ponds)\n\n";
        ask_dognut();
        cin>>choice3;
        system("cls");
        switch(choice3)
        {
          case 1:
          {
            price+=dognut;
            cout<<"Your Order is Chocolate Cake ("<<size<<" Ponds)\n";
            cout<<"With Dough-Nuts\n\n";
            cout<<"Total Price = Rs."<<price<<"\n";
            break;
          }
          case 2:
          {
            cout<<"Your Order is Chocolate Cake ("<<size<<" Ponds)\n";
            cout<<"Without Dough-Nuts\n\n";
            cout<<"Total Price = Rs."<<price<<"\n";
            break;
          }

          default:
          {
            cout<<"Invalid Choice\n";
          }
       }
}

 void cake:: chocolate()
{
  cout<<"You Selected Chocolate Cake\n";
  cout<<"(Per Pound = Rs.130)\n\n";
  cout<<"Enter Cake Size ";
  cin>>size;
  system("cls");
  for(int a=1;a<=size;a++)
  {
    price+=130;
  }
  system("cls");
  cout<<"Your Order is Chocolate Cake ("<<size<<" Ponds)\n\n";
  ask_dognut();
  cin>>choice3;
  system("cls");
  switch(choice3)
  {
    case 1:
    {
      price+=dognut;
      cout<<"Your Order is Chocolate Cake ("<<size<<" Ponds)\n";
      cout<<"With Dough-Nuts\n\n";
      cout<<"Total Price = Rs."<<price<<"\n";
      break;
    }
     case 2:
     {
        cout<<"Your Order is Chocolate Cake ("<<size<<" Ponds)\n";
        cout<<"Without Dough-Nuts\n\n";
        cout<<"Total Price = Rs."<<price<<"\n";
        break;
     }
     default:
    {
      cout<<"Invalid Choice\n";
    }
  }
}

void cake:: vanilla()
{
  cout<<"You Selected Vanilla Cake\n";
      cout<<"(Per Pound = Rs.180)\n\n";
      cout<<"Enter Cake Size: ";
      cin>>size;
            for(int a=1;a<=size;a++)
            {
              price+=180;
            }
            system("cls");
            cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n\n";
            ask_dognut();
            cin>>choice3;
            system("cls");
            switch(choice3)
            {
              case 1:
              {
                price+=dognut;
                cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n";
                cout<<"With Dough-Nuts\n\n";
                cout<<"Total Price = Rs."<<price<<"\n";
                break;
              }
              case 2:
              {
                cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n";
                cout<<"Without Dough-Nuts\n\n";
                cout<<"Total Price = Rs."<<price<<"\n";
                break;
              }

            default: { cout<<"Invalid Choice\n"; }
            }

}


  void cake::ask_dognut()
{
  cout<<"Do you want to add Dough-Nuts to Cake\n\n";
  cout<<"1. Yes  (Charges = Rs. 100)\n";
  cout<<"2. No\n\n";
  cout<<"Your choice = ";
}

void cake::custom_cake()
{
  system("cls");
  price=200;
  cout<<"Enter your cake type: ";
  cin>>type;
  cout<<"\nCake size: (Per pound = Rs. 320)\n\n";
  cout<<"Size = ";
  cin>>size;
  for(int a=1;a<=size;a++)
  {
    price+=320;
  }
  system("cls");
  cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n\n";
    ask_dognut();
    cin>>choice2;
    system("cls");
    switch(choice2)
    {
      case 1:
      {
        price+=dognut;
        cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n";
        cout<<"With Dough-Nuts\n\n";
        cout<<"Total Price = Rs."<<price<<"\n";
        break;
      }
        case 2:
        {
          cout<<"Your Order is "<<type<<" Cake ("<<size<<" Ponds)\n";
          cout<<"Without Dough-Nuts\n\n";
           cout<<"Total Price = Rs."<<price<<"\n";
            break;
         }
            default: { cout<<"Invalid Choice\n"; }
      }

}

