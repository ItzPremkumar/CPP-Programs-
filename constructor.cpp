using  namespace std;
#include <iostream>
#include<string.h>
class College
{
  public:
  	int cid,year;
  	char cname[20];
   void accept();
   void disp();
};
	void College::accept()
  	{
  	  cout<<"Enter College id name Year:";
	 cin>>cid>>cname>>year;	
	}
	 void College::disp()
	{
		  cout<<"\n College id="<<cid;
		  cout<<"\n College name="<<cname;
		  cout<<"\n College year="<<year; 	
	}
int main()
{
	College ob;
	ob.accept();
	ob.disp();
}