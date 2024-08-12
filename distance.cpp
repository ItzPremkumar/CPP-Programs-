#include<iostream>
class distance
{
  public:
  
  float feet,inch;
  
  void accept()
  {
    
    std::cout<<"Enter feet:";
    std::cin>>feet;
    std::cout<<"Enter inch:";
    std::cin>>inch;
  
  }
  void disp()
  {
  std::cout<<" feet :"<<feet<<std::endl;
  std::cout<<" inch:"<<inch<<std::endl;
  

  }
};
int main()
{
  distance ob;
  ob.accept();
  ob.disp();

}