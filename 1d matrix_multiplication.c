#include<stdio.h>
#include<stdlib.h>
void read(int n[100][100],int r,int c)
{
    int i=0,j=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
}
void display(int n[100][100],int r1,int c1)
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
}
multiply(int a[100][100],int r1,int c1,int b[100][100],int r2,int c2)
{
    int mul[100][100]={0},i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    display(mul,r1,c1);
}

int main()
{
    int r1,c1,r2,c2,a[100][100],b[100][100];
    printf("enter row and column of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column of second matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(r1!=c2)
    {
        printf("Matrix multiplication invalid\n");
        exit(0);
    }
    read(a,r1,c1);
    read(b,r2,c2);
    printf("\n");
    display(a,r1,c1);
    printf("\n");
    display(b,r2,c2);
    printf("\n");
    multiply(a,r1,c1,b,r2,c2);
}
