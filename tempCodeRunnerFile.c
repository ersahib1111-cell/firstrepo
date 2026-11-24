#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date d1,d2;
    printf("lets compare two dates if equal\nenter the date : ");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("now enter the second date");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    d1=d2;
    printf("%d%d%d",d2.day,d2.month,d2.year);

    if(d1==d2)
    printf("you are right , both dates are equal😊"); 
    

    
}