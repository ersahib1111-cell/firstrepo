/* check if find sum of digits of a number in float data type*/

#include<stdio.h>
int sumofdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    float n,fracpart;
    int intpart,i,sum;
    printf("enter the number to calculate sum of digits of : ");
    scanf("%f",&n);
    
    intpart=(int)n;
    fracpart=n-(int)n;
    //printf("%f\n",fracpart); 
    if(fracpart!=0)
    {
        while((int)(fracpart/10)==0)
        {
            fracpart*=10;
        }
        sum=sumofdigits(intpart)+sumofdigits(fracpart);
    }
    else
    {
        sum=sumofdigits(intpart);
    }
    
    printf("the sum of digits is %d",sum);
    return 0;
}