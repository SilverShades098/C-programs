#include<iostream>
using namespace std;

class triangle
{
  float height,base;
  public:
  void set_triangle()
  {
    cout<<"Enter Height of Triangle: ";
    cin>>height;
    cout<<"Enter Base of Triangle: ";
    cin>>base;
    cout<<endl;
  }
  float get_height()
  {
    return height;
  }
  float get_base()
  {
    return base;
  }
  virtual void compute_triangle()=0;
};

class square
{
    float side;
	public:
		void set_square()
		{
			cout<<"Enter any one side of Square: ";
			cin>>side;
			cout<<endl;
		}
		float get_square()
		{
			return side;
		}
		virtual void compute_square()=0;
};

class show:public triangle,public square
{
	float area;
	public:
		void compute_triangle()
		{
			set_triangle();
			area=(get_height()*get_base())/2;
		}
		void compute_square()
        {
			set_square();
			area=get_square()*get_square();
		}
		void output()
		{
			cout<<"Area = "<<area<<endl;
		}
};

int main()
{
	int choice;
	show s;
	cout<<"Press 1 to find Area of Triangle"<<endl;
	cout<<"Press 2 to find Area of Square"<<endl;
	cout<<"\nEnter choice: " ;
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
		{
		  s.compute_triangle();
          s.output();
          break;
		}

	    case 2:
	    {
	      s.compute_square();
          s.output();
          break;
	    }
    }
}

