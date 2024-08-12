#include<iostream>
class Addition
{
  public:
  void add(int a,int b)
  {
    int c=a+b;
    std::cout<<"\nAddition1="<<c;
  }
  void add(int a,int b,int c)
  {
    int d=c+a+b;
    std::cout<<"\nAddition2="<<d;
  }
  void add(float a,float b)
  {
    int c=a+b;
    std::cout<<"\nAddition3="<<c;
  }
};
int main()
{
    Addition ob;
    ob.add(11,22);
    ob.add(11,10);
    ob.add(33.10,10.10f);
}
