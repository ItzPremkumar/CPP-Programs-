#include<stdio.h>
void merge(int arr[],int l,int mid,int r,int j,int k)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
      L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
      R[j]=arr[mid+1+j];
    int i=j=k=0;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i=i++;
        }
        else
        {
           arr[k]=R[j];
            j=j++; 
        }
        k=k++;
    }
     while(i<n1)
     {
     arr[k]=L[i];
     i=i++;
     k=k++;
     }
     while(j<n2)
     {
     arr[k]=R[j];
     j=j++;
     k=k++;
     }
}
int main()
{
    int a[100],n,i;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("enter n numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("orignal array:\n");
    
    merge();
}