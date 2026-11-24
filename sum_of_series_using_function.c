#include<stdio.h>
float power(float x,int i)
{
    int j;
    float pwr=1.0;
    for(j=1;j<=i;j++)
    {
        pwr*=x;
    }
    return pwr;
}
float factorial(int i)
{
    float fact=-1.0;
    int j;
    for(j=1;j<=i;j++)
    {
        fact*=(-j);
    }
    return fact;
}
int main()
{
    int n,i,j;
    float sum=0,term,x;
    printf("enter the number of repetietions of the function : ");
    scanf("%d",&n);
    printf("enter the number to put in the series : ");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        term=power(x,i)/factorial(i);
        sum=sum+term;
    }
    printf("the sum of series is %f",sum);
    return 0;
}