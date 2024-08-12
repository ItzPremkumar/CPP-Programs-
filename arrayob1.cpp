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
      std::cout<<"\nEmp no="<<eno;
      std::cout<<"\nEmp name="<<ename;
      std::cout<<"\nEmp sal="<<sal;

     }
};
int main()
{
    Emp ob[5];
    int n;
    std::cout<<"Enter limit:";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        ob[i].accept();
    }
    for(int i=0;i<n;i++)
    {
       if( ob[i].sal>=50000)
       ob[i].disp();
    }
}