#include<iostream>
using namespace std;
class Mypoint{

  public:
   int x,y;
   Mypoint()
    {
        x=11;
        y=33;
        
        cout<<"\n Pointer in default constructor=("<<x<<","<<y<<")";
    }
    Mypoint(int x,int y)
    {
        this->x=x;
        this->y=y;
         cout<<"\n Addition in Parameterise constructor=("<<x<<","<<y<<")";
    }
    Mypoint(Mypoint &obj)
    {
      cout<<"\n Addition in copy constructor=("<<obj.x<<","<<obj.y<<")";  
    }

};
int main()
{  

    Mypoint ob;
     Mypoint ob1(100,300);

      Mypoint ob2(ob);
       Mypoint ob3(ob1);
}