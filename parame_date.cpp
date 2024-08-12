#include<iostream>
#include<string.h>
using namespace std;
class Mydate
{
    public:
    int dd;
    int mm;
    double yyyy;
    Mydate(int dd1,int mm1,double yyyy1)
    {
        dd=dd1;
        mm=mm1;
        yyyy=yyyy1;
    }
    void disp()
    {
      cout<<"Date="<<dd<<"/"<<mm<<"/"<<yyyy;
    }
    };
int main()
{
  int m;
  int d;
  double yy;
  cout<<"Enter day month year:";
  cin>>d>>m>>yy;
  Mydate ob(d,m,yy);
  ob.disp();
}