#include<stdio.h>
int big (int max,int a)
{
    if (a>max)
    {
        return a;
    }
    else       
    {
        return max;
    }
}
int main()
{
    int n,i,max=0,largest_number=0;
    printf("enter the number of entries in your array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element of your array : ");
        scanf("%d",&arr[i]);
    }
    //             Q BEGINS
    for(i=0;i<n;i++)
    {
        largest_number=big(arr[i],max);
        printf("%d\n",big);// this prints straight up garbage as big is actually nothing
        
    }
    printf("\n\nthe max of the array is %d",largest_number);
    return 0;
}



/* the break point was that i learned that returning a function doesnt store it , we have to store it in a variable;*/