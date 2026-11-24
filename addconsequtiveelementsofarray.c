#include<stdio.h>
int main()
{
    int n,i,j,k,m,sum;
    printf("enter the number of elements to enter : ");
    scanf("%d",&n);

    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter the value no %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("enter the number of elements to add consequtively : ");
    scanf("%d",&m);
    for (i=0;i<=(n-m);i++)
    {
        sum=0;
        for (j=0;j<m;j++)
        {             //we didnt need these curly brakets 
            sum=sum+arr[i+j];
        }    
        printf ("the sum of group number %d of %d elements each is %d\n",i+1,m,sum);
    }

        
    return 0;
}