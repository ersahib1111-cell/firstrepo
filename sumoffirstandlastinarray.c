#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the number of places to keep in an array :");
    scanf("%d",&n);
    int arr[n],sum[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0;i<((n+1)/2);i++)
    {
        sum[i]=arr[i]+arr[n-i-1];
    }


    printf("the sum of entries is:\n");


    for(i=0;i<((n+1)/2);i++)
    {
        printf("%d\n",sum[i]);
    }
    
}