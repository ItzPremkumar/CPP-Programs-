#include<iostream>
using namespace std;
  class MyMatrix
{
    public:
    int m,n,a[20][20];
    MyMatrix(int m,int n)
    {
        this->m=m;
         this->n=n;
        cout<<"Enter Elements of array:";
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
            cin>>a[i][j];
          }
        }
       
    }
    void sum()
    {
        int s=0,i,j;
         for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
            s=s+a[i][j];
          }
        }
        cout<<"Matrix Sum="<<s;
    }

};
int main()
{
    int m,n;
    cout<<"Enter Row AND  Column:";
    cin>>m>>n;
    MyMatrix ob(m,n);
    ob.sum();

}