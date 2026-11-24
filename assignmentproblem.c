#include<stdio.h>
float intamtcalc(int interest,int amount,int years)
{
    int i;
    for(i=0;i<years;i++)
    amount+=((amount*interest)/100);
    return amount;
}
int main()
{
    int amount,years,interest;
    printf("lets find the compound interest of an amount over multiple years\nenter the amount : ");
    scanf("%d",&amount);
    printf("enter the number of years : ");
    scanf("%d",&years);
    printf("enter the interest percent : ");
    scanf("%d",&interest);

    printf("the interest amount earned is %.2f",intamtcalc(interest,amount,years));
    return 0;


}
