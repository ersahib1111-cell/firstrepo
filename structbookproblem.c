#include<stdio.h>
#include<string.h>

typedef struct book{
    char title[50];
    char author[50];
    int cost;
    int year;

}book;

int main()
{
    int i;
    char dummy;
    book book1[50];

    int n=0;
    printf("enter the number of books you want to add : ");
    scanf("%d",&n);
    scanf("%c",&dummy);
    for(i=0;i<n;i++)
    {
        printf("enter the book title : ");
        fgets(book1[i].title,50,stdin);
        book1[i].title[strcspn(book1[i].title,"\n")]="\0";
        printf("enter the author name : ");
        scanf("%s",book1[i].author);
        printf("enter the book cost : ");
        scanf("%d",&book1[i].cost);
        printf("enter the book year : ");
        scanf("%d",&book1[i].year);
    }

    for(i=0;i<n;i++)
    {
        if(strcmp(book1[i].title,"computer\n")==0)
        {
            printf("%s\n",book1[i].author);
        }
        
        if(book1[i].year>50)
        {
            printf("%s",book1[i].title);
        }
        
    }
    


}