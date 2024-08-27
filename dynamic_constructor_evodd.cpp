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
        cout<<"Even number.....";
        for(int i=0;i<n;i++)
        {
          if(a[i]%2==0)
         cout<<a[i]<<" "<<endl;
        }
        
        cout<<"odd number....."<<endl;
        for(int i=0;i<n;i++)
        {
          if(a[i]%2==1)
         cout<<a[i]<<" ";
        }

     }
     ~MyArray()
     {
      delete a;
      cout<<"\nMemory freee";
     }
  };
  int main()
  {
    int n;
    cout<<"Enter limit:";
    cin>>n;
   MyArray ob(n);
   ob.disp();
   

  }