#include<iostream>
using namespace std;
class Add{

  public:
   int a,b,c;
   Add(int a,int b)
    {
        this ->a=a;
        this->b=b;
        c=a+b;
        cout<<"\n Addition in Parameter constructor="<<c;
    }
    Add(Add &ob)
    {
        c=ob.a+ob.b;
         cout<<"\n Addition in copy constructor="<<c;
    }

};
int main()
{  

    Add ob(11,33);
    Add ob1(ob);
}