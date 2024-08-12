#include<iostream>
#include<string.h>
class Emp 
{
    public:
     int eno;
     char ename[20];
     float sal;
     void accept()
     {
        std::cout<<"Enter eno name sall:";
        std::cin>>eno>>ename>>sal;
     }
     void disp()
     {
      std::cout<<"\nEmp no="<<eno;
      std::cout<<"\nEmp name="<<ename;
      std::cout<<"\nEmp sal="<<sal;

     }
};
int main()
{
    Emp ob[5];
    char s1[20];
    int n,num,f=0;
    std::cout<<"Enter limit:";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        ob[i].accept();
    }
    std::cout<<"Enter emp name to search:";
    std::cin>>s1;
    for(int i=0;i<n;i++)
    {
       if( strcmp(ob[i].ename,s1)==0)
       {
        ob[i].disp();
        f=1;
        break;
       }
    }
     if(f==0)
     std::cout<<"Record not found....";
}