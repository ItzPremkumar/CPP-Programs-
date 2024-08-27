//Write a C++ program to define power function to calculate x^y. (Use default 
//value as 2 for y).
#include<iostream>
using namespace std;
int power(int x, int y) 
{
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
   power=power*x;
   return power;
}
int main()
 {
   int x;
   cout<<"ENter value of x";
   cin>>x;
   int y = 2;
   
   cout<<"x^y = "<<power(x,y);
   return 0;
}