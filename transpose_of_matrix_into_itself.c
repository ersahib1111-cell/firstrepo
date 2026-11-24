#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the order of the matrix (rows * columns) : ");
    scanf("%d%d",&n,&m);
    float mat1[n][m],temp_store;
    for(j=0;j<m;j++)
    {//entries of values in matrix
        for(i=0;i<n;i++)
        {
            printf("enter the value of mat[%d][%d] : ",i+1,j+1);
            scanf("%f",&mat1[i][j]);
        }
    }


    //printing current matrix
    printf("the current matrix is\n");
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%.2f    ",mat1[i][j]);
        }
        printf("\n");
    }


    printf("\n\n\nthe transposed matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i!=j){
            temp_store=mat1[i][j];
            mat1[i][j]=mat1[j][i];
            mat1[j][i]=temp_store;
            printf("%.2f    ",mat1[i][j]);}
        }
        printf("\n");
    }
    
    return 0;
} 