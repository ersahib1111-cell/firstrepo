#include<stdio.h>
int main()
{
    int arr[50];
    int n=5,i,sumeven=0,sumodd=0;
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n/2;i++)
    {
        sumeven=sumeven+arr[2*i];
        if(2*i+1<=49)
        {
            sumodd=sumodd+arr[2*i+1];
        }
    }
    printf("the sumofeven is : %d\nthe sumofodd is : %d",sumeven,sumodd);
    return 0;
}