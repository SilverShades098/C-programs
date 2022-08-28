#include<iostream>
using namespace std;

int main()
{
  int num,x,arr[5];
  cout<<"Enter a five digit number: ";
  cin>>num;

  cout<<"\nPlease choose following options:\n\n";
  cout<<"1. Encrypt the Number.\n";
  cout<<"2. Decrypt the Number.\n\n";
  cout<<"Your choice = ";
  cin>>x;

  for(int a=0;a<5;a++)
  {
    arr[a]=num%10;
    num/=10;
  }

  if(x==1)
  {
    cout<<"\nEncrypted Number = ";
    for(int a=4;a>=0;a--)
    {
      arr[a]+=3;
      if(arr[a]<=9) { cout<<arr[a]; }
      else if(arr[a]==10) { cout<<"a"; }
      else if(arr[a]==11) { cout<<"b"; }
      else if(arr[a]==12) { cout<<"c"; }
    }
  }

  else if(x==2)
  {
    cout<<"\nDecrypted Number = ";
    for(int a=4;a>=0;a--)
    {
      arr[a]-=3;
      if(arr[a]>0) { cout<<arr[a]; }
      else if(arr[a]==0) { cout<<"a"; }
      else if(arr[a]==-1) { cout<<"b"; }
      else if(arr[a]==-2) { cout<<"c"; }
    }
  }

  else { cout<<"Invalid Entry:"; }

  cout<<endl;

}

