#include<iostream>
using namespace std;
 class Demo
  {
    public:
   int *a;
    Demo()
     {
         a=new int(132);
         cout<<"VAlue ="<<*a;
          delete a;
     }
  };
  int main()
  {
   Demo ob;
   

  }