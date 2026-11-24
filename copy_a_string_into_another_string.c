#include<stdio.h>
#include<string.h>
void copystr(char str1[50],char str2[50])
{
    int i,j,len1;
    len1=strlen(str1);
    for(i=0;i<len1;i++)
    {
        str2[i]=str1[i];
    }

}
int main()
{
    char str1[50],str2[50];
    printf("enter the string : ");
    scanf("%s",str1);
    copystr(str1,str2);
    printf("%s",str2);
}