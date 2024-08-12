#include<iostream>
class student
{
  public:
  int rno,m[5],s=0;
  float p;
  char name[20];
  void accept()
  {
    
    std::cout<<"Enter roll no:";
    std::cin>>rno;
    std::cout<<"Enter name:";
    std::cin>>name;
    std::cout<<"Enter five subject :";
    for(int i=0;i<5;i++)
    std::cin>>m[i];
  }
  void calculate()
  {
   for(int i=0;i<5;i++)
  s=s+m[i];
  p=(float)s/5;

  }
  void disp()
  {
  std::cout<<" roll no:"<<rno<<std::endl;
  std::cout<<" name:"<<name<<std::endl;
  std::cout<<" total marks:"<<s<<std::endl;
  std::cout<<" Persentage:"<<p<<std::endl;

  }
};
int main()
{
  student ob;
  ob.accept();
  ob.calculate();
  ob.disp();
}