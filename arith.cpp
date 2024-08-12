
#include <iostream>

using namespace std;

int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int rem;

int main()
{

 int a,b,m,su,s,d;

 std::cout<<"Enter Two Numbers : \n";
 std::cin>>a>>b;

 s=sum(a,b);
 su=sub(a,b);
 m=mul(a,b);
 d=div(a,b);

 std::cout<<"\nSum : = "<<s<<"\nSubtraction : = "<<su<<endl;
 std::cout<<"\nMultiplication : = "<<m<<"\n Division : = "<<d<<endl;
 return 0;
}

int sum(int a,int b)
{
 rem=a+b;
 return(rem);
}

int sub(int a,int b)
{
 rem=a-b;
return(rem);
}

int mul(int a,int b)
{
 rem=a*b;
return(rem);
}

int div(int a,int b)
{
 rem=a/b;
return(rem);
}