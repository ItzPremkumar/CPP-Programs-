#include<iostream>
class cal
{
    public:
void area(float r)
{
    float a=3.14*r*r;
    std::cout<<"\n Area of circle="<<a;
}
void area(int l,int b)
{
    int a=l*b;
    std::cout<<"\n Area of rectangle="<<a;
}
void area(float b,float h)
{
    float a=0.5*b*h;
    std::cout<<"\n Area of Triangle="<<a;
}
void area(double s)
{
    double a=s*s;
    std::cout<<"\n Area of square="<<a;
}
void area(int s)
{
    int a=s*s*s;
    std::cout<<"\n Area of cube="<<a;
}
};
int main()
{
    cal ob;
   ob.area(11.22);
    ob.area(11.10,22.89f);
    ob.area(33);
    ob.area(11);
}
