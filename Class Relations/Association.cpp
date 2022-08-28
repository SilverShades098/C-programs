#include <iostream>
using namespace std;

class Bank
{
  string name;
  public:
    Bank(string name)
	{
      this->name = name;
	}

	string getBankName()
	{
		return name;
	}

};

class Employee
{
  string name;
  public:
    Employee(string name)
	{
      this->name = name;
	}

	string getEmployeeName()
	{
      return name;
	}

};

int main()
{
  Bank bank("HBL");
  Employee emp("Jimmy");
  cout<<emp.getEmployeeName()<<" is employee of "<<bank.getBankName()<<endl;
}

