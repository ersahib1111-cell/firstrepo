#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    int i,len1,equal=1;
    printf("enter the string : ");
    scanf("%s",str1);
    
    len1=strlen(str1);
    printf("%d\n",len1);
    
    for(i=0;i<len1;i++)   
    {
        if (str1[i]!=str1[len1-1-i])
        equal=0;
        break;
    }
    
    if (equal==0)
    printf("the string is not a palindrome");
    else
    printf("the string is a palindrome");
    return 0;
    

    

}