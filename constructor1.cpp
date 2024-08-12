#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
	public:
		int eno;
		char ename[20];
		float sal;
	Emp()
	{
		eno=101;
		strcpy(ename,"Om");
		sal=90000;
	}
	void disp()
	{
	 cout<<"Emp no="<<eno<<endl;
	 cout<<"Emp name="<<ename<<endl;
	 cout<<"Emp sal="<<sal<<endl;	
	}
};
int main()
{
 Emp ob;
 ob.disp();
}