#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    public:
    int eno;
    char ename[20];
    double sal;
    Emp(int eno1,char ename1[20],double sal1)
    {
        eno=eno1;
        strcpy(ename,ename1);
        sal=sal1;
    }
    void disp()
    {
      cout<<"Emp no="<<eno<<endl;
      cout<<"Emp name="<<ename<<endl;
      cout<<"Emp salary="<<sal<<endl;
    }
};
int main()
{
  int eno;
  char name[20];
  double s;
  cout<<"Enter eno ename salary:";
  cin>>eno>>name>>s;
  Emp ob(eno,name,s);
  ob.disp();
}