#include<iostream>
using namespace std;
inline int pre_increment(int n)
{
   return ++n;
}
inline int pre_decrement(int n)
{
    --n;
}
int main()
{
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    
        cout<<"Value="<<pre_increment(n)<<endl;
        cout<<"Value="<<pre_decrement(n)<<endl;
    
}