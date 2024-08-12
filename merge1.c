#include<stdio.h>
int main()
{
    int a[50],b[50],c[100],i,j,k,n1,n2,n3;
    printf("Enter first array limit:");
    scanf("%d",&n1);
    printf("enter elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter second array limit:");
    scanf("%d",&n2);
    printf("enter elements:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    n3=n1+n2;
     
     while(i<n1&&j<n2)
     {
        if(a[i]<b[j])
        c[k++]=b[j++];
    else
      c[k++]=b[j++];
     }
     while(i<n1)
     c[k++]=a[i++];
     while(j<n2)
     c[k++]=b[j++];
    printf("sort array:");
    for(i=0;i<n3;i++)
    printf("%d\t",c[i]);

}