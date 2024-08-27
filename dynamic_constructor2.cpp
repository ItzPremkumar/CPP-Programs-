#include<iostream>
using namespace std;
 class MyArray
  {
    public:
   int *a,n;
        MyArray(int n)
        {
         this->n=n;
         a=new int[n];
         cout<<"Enter n number";
         for(int i=0;i<n;i++)
         cin>>a[i];

        }
    void disp()
     {
        for(int i=0;i<n;i++)
         cout<<a[i];

     }
  };
  int main()
  {
   MyArray ob;
   ob.disp();
   

  }