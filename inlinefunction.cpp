//Write a C++ program to accept length and width of a rectangle. Calculate and 
//display perimeter as well as area of a rectangle by using Inline function.
#include<iostream>
using namespace std;
inline float area(float l,float w) // inline function
{
	return(l*w); // formula of area of rectangle
}
inline float peri(float l,float w)  // inline function
{
	return(2*l+2*w); // formula of perimeter of rectangle
}
int main()
{
   float l,w; // l=length , h=height
   cout<<"\nEnter value of length: ";
   cin>>l;
   cout<<"\nEnter value of width: ";
   cin>>w;
   cout<<"\nArea of rectangle: "<<area(l,w);
   cout<<"\nPerimeter of rectangle :"<<peri(l,w);
   cout<<endl;
}
