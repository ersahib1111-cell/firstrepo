#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the order of the matrix (rows * columns) : ");
    scanf("%d%d",&n,&m);
    float mat1[n][m],mat2[m][n];
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


    /*creating new matrix and printing it*/
    printf("\n\n\nthe transposed matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            mat2[j][i]=mat1[i][j];
            printf("%.2f    ",mat2[j][i]);
        }
        printf("\n");
    }
    
    return 0;
} /* the matrix 2 will always have mat[j][i] for every matrix 1 being mat[i][j]*/