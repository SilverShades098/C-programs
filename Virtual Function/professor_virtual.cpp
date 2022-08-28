#include <iostream>
using namespace std;

class employee
{
  float salary;
  string name;
  int id;
  public:
  void set_data()
  {
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<endl;
  }

  int get_data()
  {
    return salary;
  }
  virtual void compute_salary()=0;
};

class associate_professor:public employee
{
   float tax,totalsalary;
   public:
    void compute_salary()
   {
      set_data();
      tax=get_data()*0.25;
      totalsalary=get_data()-tax;
   }
   void show()
   {
     cout<<"Salary (After 25% Tax) = Rs. "<<totalsalary<<endl;
   }
};


class assistant_professor:public employee
{
   float tax,totalsalary;
   public:
    void compute_salary()
   {
    set_data();
      tax=get_data()*0.15;
      totalsalary=get_data()-tax;
   }
   void show()
   {
     cout<<"Salary (After 15% Tax) = Rs. "<<totalsalary<<endl;
   }
};

class lecturer:public employee
{
   float tax,totalsalary;
   public:
    void compute_salary()
   {
      set_data();
      tax=get_data()*0.10;
      totalsalary=get_data()-tax;
   }
   void show()
   {
     cout<<"Salary (After 10% Tax) = Rs. "<<totalsalary<<endl;
   }
};

int main()
{
   cout<<"Press 1 for Associate Professor\n";
   cout<<"Press 2 for Assistant Professor\n";
   cout<<"Press 3 for Lecturer\n\n";
   cout<<"Enter choice: ";
   int choice;
   cin>>choice;
   cout<<endl;

   switch(choice)
   {
     case 1:
     {
        associate_professor a;
        a.compute_salary();
        a.show();
        break;
     }
     case 2:
     {
       assistant_professor f;
       f.compute_salary();
       f.show();
       break;
     }
     case 3:
     {
       lecturer l;
       l.compute_salary();
       l.show();
       break;
     }

   }

}

