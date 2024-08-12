#include<iostream>
using namespace std;
class Add
{
    public:
    Add(int a,int b)
    {
        int c=a+b;
        cout<<"Addition="<<c;
    }
};
int main()
{
  Add ob(11,44);
}