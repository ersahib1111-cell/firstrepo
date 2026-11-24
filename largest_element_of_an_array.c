#include<stdio.h>
int main()
{
    int n,i,j,k,m,sum,big;
    printf("enter the number of elements to enter : ");
    scanf("%d",&n);

    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter the value no %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    big=arr[0];
    for (i=0;i<n;i++)
    {
        if (arr[i+1]>arr[i])
        big=arr[i+1];
        else
        big=arr[i];
    }
    printf("the largest entry is %d",big);

} 