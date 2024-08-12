#include<stdio.h>
 int print_sum(int n)
 {
   if(n!=0)
     return(n+print_sum(n-1));
    else
    return 0;
 }
 int main()
 {
    int n;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("\nsum=%d", print_sum( n));
 }