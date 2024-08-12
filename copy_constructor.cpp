#include<iostream>
using namespace std;
class Add{

  public:
   int a,b,c;
   Add()
    {
        a=11;
        b=33;
        c=a+b;#include<iostream>
        cout<<"\n Addition in defualt constructor="<<c;
    }
    Add(Add &ob)
    {
        c=ob.a+ob.b;
         cout<<"\n Addition in copy constructor="<<c;
    }

};
int main()
{  

    Add ob;
    Add ob1(ob);
}