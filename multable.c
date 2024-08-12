#include<stdio.h>

 int multable(int n)
 { 
   static  int i=1,r;
   if(i>10)
   {
      r=n*i;
   }
    
    return r;
 }
 int main()
 {
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
   multable(n);
 }