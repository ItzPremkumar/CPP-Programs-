#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
    int rno,s[10],n;
    char sname[20];
    Student(int rno,char sname[20],int n)
    {
        this->rno=rno;
        strcpy(this-> sname,sname);
         this -> n=n;
        cout<<"Enter mark of n Subjects:";
        for(int i=1;i<=n;i++)
           cin>>s[i];
    }
    
    void disp()
    {
      cout<<"Roll no="<<rno<<endl;
      cout<<" name="<<sname<<endl;
      cout<<"Marks of Subjects ="<<endl;
      for(int i=1;i<=n;i++)
      cout<<"Marks of"<<"Subject"<<i<<"="<<s[i]<<endl;
    }
};
int main()
{
  int i,rno,n;
  char name[20];
  cout<<"Enter Roll name:";
  cin>>rno>>name;
  cout<<"Enter no of Subjects ="<<endl;
  cin>>n;
  Student ob(rno,name,n);
   ob.disp();
}