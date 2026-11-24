#include<stdio.h>

int max3(int a ,int b, int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    {
        if(b>c)
        return b;
        else
        return c;
    }
}
int main()
{
    int arr[9],i;
    printf("enter the 9 numbers to calculate maxima of ");
    for(i=0;i<=8;i++)
    {
        printf("enter the next number now : ");
        scanf("%d",&arr[i]);
        
    }
    int max=arr[0];
    for(i=1;i<=8;i+=2)
    {
        max=max3(arr[i],arr[i+1],max);
    }
    printf("the maximum of 9 numbers is : %d",max);
}
