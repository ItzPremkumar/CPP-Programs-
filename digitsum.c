#include<stdio.h>
 int revsum(int n)
 { 
   static int r;
    if(n>0)
  { 
     r=(r*10)+n%10;
    return revsum(n/10);
  }
    return r;
      
 }
 int main()
 {
    int n;
    printf("Enter digit:");
    scanf("%d",&n);
    printf("\nsum=%d", revsum(n));
 }