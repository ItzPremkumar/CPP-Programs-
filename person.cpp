#include<iostream>
class Person
{
  public:
  int id;
  long long contact;
  char name[20],add[30];
  
  void accept()
  {
    
    std::cout<<"Enter Id:";
    std::cin>>id;
    std::cout<<"Enter name:";
    std::cin>>name;
    std::cout<<"Enter address:";
    std::cin>>add;
    std::cout<<"Enter contact:";
    std::cin>>contact;
  }
  void disp()
  {
   std::cout<<"ID=:"<<id<<std::endl;
   std::cout<<"Name=:"<<name<<std::endl;
   std::cout<<"address=:"<<add<<std::endl;
   std::cout<<"Contact=:"<<contact<<std::endl;

  }
};
int main()
{
 Person ob;
 ob.accept();
 ob.disp();

}