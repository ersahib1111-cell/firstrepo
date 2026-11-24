#include<stdio.h>
double fact(int n)
{
    int product;
    if(n>0)
    {   
        product=n*fact(n-1);
        return product;
    }
    else
    return 1.0;
}
float series(int x,int n)
{
    float num=x,term,sum=0;
    double deno=1;
    int i;
    for(i=1;i<=n;i++)
    {
        deno=fact(2*i-1);
        term=num/deno;
        sum+=term;
        num*=-x*x;
    }
    return sum;
    
}
int main()
{
    int x,n;
    printf("enter the number of iterations and the number to put in : \n");
    scanf("%d%d",&n,&x);

    printf("the sum of the series S= x - x3/3! +x5/5! - x7/7! ... upto xn/n! is %f\n",series(x,n));
}