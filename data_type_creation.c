#include<stdio.h>
struct student
    {
        char name[50];
        int age;
        char branch;
    };
int main()
{
    
    struct student friend1;
    printf("name : ");
    scanf("%s",&friend1.name);

    
    printf("%s",friend1.name);

}