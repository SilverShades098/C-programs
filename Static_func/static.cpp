#include <iostream>
using namespace std;

class nothing
{
  int a,b;
  static int count;   /** Static Member **/
  public:
  nothing(int c,int d)
  {
    a=c;
    b=d;
  }
  nothing (nothing &n2)   /** Copy constructor  **/
  {
    a=n2.a;
    b=n2.b;
  }
  void show()
  {
    cout<<"(Object "<<++count<<")  a = "<<a<<"  b = "<<b<<endl;
  }

  static int objects()  /** Static Member Function  **/
  {
    cout<<"\nTotal objects = "<<nothing::count<<endl;
  }

};

int nothing::count=0;   /** Initialize static member only outside of class   **/

int main()
{
  nothing n1(5,10);
  nothing n2=n1;  /** nothing n2(n1);  **/
  n1.show();
  n2.show();
  nothing::objects();
}

