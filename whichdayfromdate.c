#include<stdio.h>
int ifleap(int year)
{
    int leap=0;
    if(year%100==0)
    {
      if(year%400==0)
        leap=1;  
    }
    else
    {
        if(year%4==0)
        leap=1;
    }
    return leap;
}
int daysofmonth(int month,int year)
{ 
    int leap=ifleap(year);
    // we have to give store days of month in an array and then add it using loop till we get to our desired loop
    int arr[15];
    arr[0]=0; arr[1]=31; 
    if(leap==1)
    {
        arr[2]=29;
    }
    else 
    {
        arr[2]=28;
    }
    
    arr[3]=31; arr[4]=30; arr[5]=31; arr[6]=30; arr[7]=31; arr[8]=31; arr[9]=30; arr[10]=31; arr[11]=30;arr[12]=31;
    

    int days=0,i;
    for(i=1;i<=month-1;i++)
    {
        days=arr[i]+days;
    }
    return days;
    
}
int noofdays(int date,int month,int year)
{
    int i;
    int daysbw,leapyears=0,nonleapyears=0;
    int leap=ifleap(year);

    
    if(year>=2000)
    {
        for(i=1;i<=year-2000;i++)
    {
        int leap=ifleap(year-i);
        if(leap==1)
        {
            leapyears++;
        }
        else
        nonleapyears++;
    }
    daysbw=date-1+daysofmonth(month,year)+leapyears*366+nonleapyears*365;
    }
    
    else
    {
        for(i=1;i<=2000-year;i++)
    {
        int leap=ifleap(year+i);
        if(leap==1)
        {
            leapyears++;
        }
        else
            nonleapyears++;
    }
    daysbw=date-1+(month-1)*daysofmonth(month,year)+leapyears*366+nonleapyears*365;
    }
    
    
    return daysbw;
}

int main()
{
    // given a date , find day of that date
    int date,month,year;
    printf("enter the date\nenter the days : ");
    scanf("%d",&date);
    printf("enter the month no : ");
    scanf("%d",&month);
    printf("enter the year : ");
    scanf("%d",&year);

    // since we know 1 jan 2000 was a saturday we use it as reference so we now we find days between dates given and 1 jan 2000 to get no of days and we then find no of weeks and leftover days and then use switch cases to print days

    int noofweekdays= noofdays(date,month,year)%7;
    switch (noofweekdays)
    {
        case 0: printf("the day is saturday");
        break;
        case 1: printf("the day is sunday");
        break;
        case 2: printf("the day is monday");
        break;
        case 3: printf("the day is tue");
        break;
        case 4: printf("the day is wed");
        break;
        case 5: printf("the day is thur");
        break;
        case 6: printf("the day is friday");
        break;

        default: printf("hey bro the code isn't working i am so sorry");

    }
    printf("\n%d",noofdays(date,month,year));

   
     
    //2769
    //1520

    
}