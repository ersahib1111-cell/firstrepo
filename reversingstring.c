#include<stdio.h>
#include<string.h>
int main()
{
    //this is the program to reverse a string into itself
    char h[50],tempstore;
    printf("enter the string here : ");
    scanf("%s",h);
    for(int i=0;i<=(strlen(h)-1)/2;i++)
    {
        tempstore=h[i];
        h[i]=h[strlen(h)-1-i]; 
        h[strlen(h)-1-i]=tempstore;
    }
    printf("the reversed string is : %s",h);
}