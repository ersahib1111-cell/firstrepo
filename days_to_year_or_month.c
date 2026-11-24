#include<stdio.h>
int main()
{
    int leapyear=0,year=0,month=0,days=0,noofdays=0,daysleft=0,incrementyear=0;
    printf("enter the number of days : ");
    scanf("%d",&noofdays);
    if(noofdays/1431>=1)
    {
        incrementyear=(noofdays/1431);
        leapyear+=incrementyear;
        year+=3*incrementyear+(noofdays%1431)/365;
    }
    else
    {
        year=noofdays/365;
    }
    daysleft=noofdays-365*year-366*leapyear+(noofdays%1431)%365;
    month=daysleft/30;
    days=daysleft%30;

    printf("the number of leap years is : %d\nthe number of years is : %d\nthe number of months is : %d\nthe number of days is : %d\n",leapyear,year,month,days);

    return 0;
    /**/

}