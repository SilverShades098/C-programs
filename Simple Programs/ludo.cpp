#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  int x,y,sum[2]={0,0};

  for(int i=1;i<=3;i++)
  {
     x=rand()%6+1;
     cout<<"Enter value of Player 1: "<<x<<endl;
     sum[0]+=x;
     if(x<6) { break; }
     if(i==3&&x==6) { x=0; sum[0]=0; }
  }

  for(int i=1;i<=3;i++)
  {
     y=rand()%6+1;
     cout<<"\n\nEnter value of Player 2: "<<y;
     sum[1]+=y;
     if(y<6) { break; }
     if(i==3&&y==6) { y=0; sum[1]=0; }
  }

  cout<<"\n\nPlayer 1 value = "<<sum[0];
  cout<<"\nPlayer 2 value = "<<sum[1];

  if(sum[0]>sum[1])
  {
      cout<<"\n\n\nPlayer 1 wins\n";
  }

  else
  {
      cout<<"\n\n\nPlayer 2 wins\n";
  }
}

