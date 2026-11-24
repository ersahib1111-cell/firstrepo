#include<stdio.h>
#include<string.h>
int main()
{
    int i,len1,len2,len3;
    char str1[50],str2[50],str3[100];
    printf("enter the first string :");
    scanf("%s",str1);
    printf("enter the second string :");
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    
    for(i=0;i<=len1;i++)
    {
        str1[len2+i]=str1[i];
    }
    for(i=0;i<len2;i++)
    {
        str1[i]=str2[i];
    }
    printf("the concatinated string is %s\n",str1);
    printf("%d",len2);
    return 0;
    /*fomo is a real thing and a very common thing among college freshpeople*/
   
}