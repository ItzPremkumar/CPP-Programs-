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
      switch(mm)
      {
        case 1:cout<<dd<<"/"<<"Jan /"<<yyyy;
        break;
        case 2:cout<<dd<<"/"<<"Feb /"<<yyyy;
        break;
        case 3:cout<<dd<<"/"<<"March /"<<yyyy;
        break;
        case 4:cout<<dd<<"/"<<"April /"<<yyyy;
        break;
        case 5:cout<<dd<<"/"<<"May /"<<yyyy;
        break;
        case 6:cout<<dd<<"/"<<"June /"<<yyyy;
        break;
        case 7:cout<<dd<<"/"<<"July /"<<yyyy;
        break;
        case 8:cout<<dd<<"/"<<"Aug /"<<yyyy;
        break;
        case 9:cout<<dd<<"/"<<"Sep /"<<yyyy;
        break;
        case 10:cout<<dd<<"/"<<"Oct /"<<yyyy;
        break;
        case 11:cout<<dd<<"/"<<"Nov /"<<yyyy;
        break;
        case 12:cout<<dd<<"/"<<"Dec /"<<yyyy;
        break;
      }
      
    }
    };
int main()
{
  int mm;
  int d;
  double yy;
  cout<<"Enter day month year:";
  cin>>d>>mm>>yy;
  Mydate ob(d,mm,yy);
  ob.disp();
}