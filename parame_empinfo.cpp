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
  Emp ob(101,"om",44000);
  ob.disp();
}