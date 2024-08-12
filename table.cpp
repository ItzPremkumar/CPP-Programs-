#include <iostream>
int main()
{
  int n,i;
  std::cout << "Enter first no: ";
  std::cin>>n;
   std::cout << "Multiplication table=";
   for(i=0;i<=10;i++)
   {
    std::cout <<n*i << std::endl;
   }
}