#include<iostream>
using namespace std;
  class Myarray
{
    public:
    int n,i,a[100];
    Myarray(int n)
    {
        this->n=n;
        cout<<"Enter Elements of array:";
        for(i=0;i<n;i++)
        cin>>a[i];
    }
    void disp()
    {
        cout<<"Even Elements="<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            cout<<a[i]<<endl;
        }
         cout<<"Odd Elements="<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==1)
            cout<<a[i]<<endl;
        }
    }

};
int main()
{
    int n,i,a[100];
    cout<<"Enter Limit:";
    cin>>n;
    Myarray ob(n);
    ob.disp();

}