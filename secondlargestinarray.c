#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the no of digits to create in an array : ");
    scanf("%d",&n);
    int arr[n];

    // to scan array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int big=arr[0],secondbig=arr[0],sum[n],largesum=0;

    //to find largest
    for(i=0;i<n;i++)
    {
        if(arr[i]>=big)
        {
            big=arr[i];
        }
    }

    //to find second largest
    for(i=0;i<n;i++)
    {
        sum[i]=big+arr[i];

        if(sum[i]>=largesum && arr[i]!=big)
        {
            largesum=sum[i];
            secondbig=arr[i];
        }
        
    }
    
    printf("the second largest element is : %d\nthe biggest element is : %d",secondbig,big);
}