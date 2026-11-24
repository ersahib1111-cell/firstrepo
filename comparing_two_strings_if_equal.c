#include<stdio.h>
int length_str(char str[])
{
    int i=0,len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    return len;
}
int main()
{
    char str1[100],str2[100];
    int i,len1,len2,equal=1;
    printf("enter the first string : ");
    scanf("%s",str1);
    printf("enter the second string : ");
    scanf("%s",str2);
    len1=length_str(str1);
    printf("%d\n",len1);
    len2=length_str(str2);
    printf("%d\n",len2);
    if(len1!=len2)
    {
        equal=0;
    }
    else
    {
        for(i=0;i<len1;i++)
        if(str1[i]!=str2[i])
        {
            equal=0;
            break;
        }
    }
    if (equal==0)
    printf("the strings are not equal");
    else
    printf("the strings are equal");
    return 0;
    

    

}
