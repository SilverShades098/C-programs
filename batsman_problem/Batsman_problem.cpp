#include <iostream>
using namespace std;

class player
{
  protected:
     string name,category;
     float matches;
};

class batsman:protected player
{
  protected:
     float total_score,best_score,strike_rate;
  public:
     batsman(string n)
     {
       name=n; category="Batsman";
     }
     void set_information(int m,int ts,int bs,float sr)
     {
       matches=m; total_score=ts; best_score=bs; strike_rate=sr;
     }
     void getname(){cout<<name;}
     void getcategory(){cout<<category;}
     float getmatches(){return matches;}
     float gettotalscore(){return total_score;}
     float getbestscore(){return best_score;}
     float getstrikerate(){return strike_rate;}
};

class bowler:protected player
{
  protected:
     float noof_wikets,economy;
  public:
     void set_information(int m,int n,float e)
     {
       matches=m; noof_wikets=n; economy=e;
     }
     void getname(){cout<<name;}
     void getcategory(){cout<<category;}
     float getmatches(){return matches;}
     float getnoofwikets(){return noof_wikets;}
     float geteconomy(){return economy;}
};

class pace_bowler:public bowler
{
  public:
     pace_bowler(string n)
     {
       name=n; category="Pacer";
     }

};

class spin_bowler:public bowler
{
  public:
     spin_bowler(string n)
     {
       name=n; category="Spinner";
     }

};

int main()
{
  batsman b[8]={{"Umar Akmal"},{"Khushdil Shah"},{"Awais Zia"},{"Abid Ali"},{"Umar Amin"},{"Muhammmad Saad"}
  ,{"Israrullah"},{"Umar Siddiq"}};

  b[0].set_information(5,342,136,140.74);
  b[1].set_information(5,316,154,131.12);
  b[2].set_information(5,268,84,101.90);
  b[3].set_information(5,263,132,99.62);
  b[4].set_information(4,244,83,98.78);
  b[5].set_information(5,235,69,83.92);
  b[6].set_information(4,214,96,97.27);
  b[7].set_information(4,205,88,99.03);

  pace_bowler p[4]={{"Bismillah Khan"},{"Wahab Riaz"},{"Zohaib Khan"},{"Aamer Yamin"}};
  p[0].set_information(4,1,3.89);
  p[1].set_information(5,4,4.88);
  p[2].set_information(4,3,4.37);
  p[3].set_information(4,3,4.01);

  spin_bowler s[3]={{"Umar Gul"},{"Nauman Ali"},{"Waqas Maqsood"}};
  s[0].set_information(4,2,4.08);
  s[1].set_information(4,3,4.23);
  s[2].set_information(4,4,5.62);

  float average[8];
  for(int a=0;a<8;a++)
  {
    average[a]=b[a].gettotalscore()/b[a].getmatches();
  }

  for(int x=0;x<8;x++)
  {
     for(int y=0;y<8;y++)
    {
      if(average[x]>average[y])
      {
        swap(average[x],average[y]);
        swap(b[x],b[y]);
      }
    }
  }

  int wikets[4];
  for(int a=0;a<4;a++)
  {
    wikets[a]=p[a].getnoofwikets();
  }

  for(int a=0;a<4;a++)
  {
     for(int b=0;b<4;b++)
    {
      if(wikets[a]>wikets[b])
      {
        swap(wikets[a],wikets[b]);
        swap(p[a],p[b]);
      }
    }
  }

  float economy[3];
  for(int a=0;a<3;a++)
  {
    economy[a]=s[a].geteconomy();
  }
  for(int a=0;a<3;a++)
  {
     for(int b=0;b<3;b++)
    {
      if(economy[a]<economy[b])
      {
        swap(economy[a],economy[b]);
        swap(s[a],s[b]);
      }
    }
  }

  cout<<"Pakistan Cricket Team:\n\n";
  for(int a=1;a<=142;a++){cout<<"-";}
  cout<<"\nNo.\tName\t\t   Matches\tCategory\tTotal Score\tBest Score\tStrike Rate\t\tAverage\t    Economy\tTotal Wikets\n";
  for(int a=1;a<=142;a++){cout<<"-";}
  cout<<"\n\n";
  for(int a=0;a<6;a++)
  {
    cout<<a+1<<"\t";b[a].getname();cout<<"\t   "<<b[a].getmatches()<<"\t\t";b[a].getcategory();
    cout<<"\t\t"<<b[a].gettotalscore()<<"\t\t"<<b[a].getbestscore()<<"\t\t"<<b[a].getstrikerate();
    cout<<"\t\t"<<average[a]<<"\t    -"<<"\t\t-"<<endl;
  }

  for(int a=0;a<3;a++)
  {
    cout<<a+7<<"\t";p[a].getname();cout<<"\t   "<<p[a].getmatches()<<"\t\t";p[a].getcategory();
    cout<<"\t\t-\t\t-\t\t-\t\t-\t    "<<p[a].geteconomy()<<"\t"<<p[a].getnoofwikets()<<endl;
  }

  for(int a=0;a<2;a++)
  {
    cout<<a+10<<"\t";s[a].getname();cout<<"\t   "<<s[a].getmatches()<<"\t\t";s[a].getcategory();
    cout<<"\t\t-\t\t-\t\t-\t\t-\t    "<<s[a].geteconomy()<<"\t"<<s[a].getnoofwikets()<<endl;
  }

  cout<<endl;
  for(int a=1;a<=142;a++){cout<<"-";}
  cout<<endl;
}

