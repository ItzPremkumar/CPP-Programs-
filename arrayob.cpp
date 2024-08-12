#include<iostream>
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
      std::cout<<"\n\nEmp no="<<eno;
      std::cout<<"\n\nEmp name="<<ename;
      std::cout<<"\n\nEmp sal="<<sal;

     }
};
int main()
{
    Emp ob[5];
    for(int i=0;i<5;i++)
    {
        ob[i].accept();
    }
    for(int i=0;i<5;i++)
    {
        ob[i].disp();
    }
}