#include<stdio.h>
double factorial(int n)
{
    if (n>=2)
    {
        double fact=n*factorial(n-1);
        return fact;
    }
    
    
    else return 1;

} 
int main()
{
    int n,r;
    double ncr;
    printf("for nCr enter n and r : ");
    scanf("%d%d",&n,&r);
    ncr=factorial(n)/(factorial(n-r)*factorial(r));
    printf("the ncr is %.2lf",ncr);
    
    
}