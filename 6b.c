6b C-Program to perform multiplication of two matrices

#include <stdio.h>
#define N 10
int main()
{
int a[N][N],b[N][N],c[N][N],i,j,k,sum,x,y,p,q;
printf(“Enter roe and columns for first matrix:/n);
scanf(“%d%d”,&x,&y);
printf(“Enter first matrix elements:\n”);
for (i=0;i<N;i++)
{
for (j=0;j<N;j++)
{
scanf(“%d”,&a[i][j] );
}
}
printf(“Enter rows and colms for second matrix:\n”,);
scanf(“%d %d”,&p,&q );
printf(“\nenter second matrix elements:\n”);
for (i=0;i<p;i++)
{
for (j=0; j<q; j++)
{
scanf (“%d”, &b[i][j] );
}
}
printf(“\n first matrix is:\n”);
for (i=0;i<x; i++)
{
for (j=0; j<y; j++)
{
printf (“%d\t”, a[i][j] );
}
printf(“\n”);
}
printf(“\n second matrix is:\n”);
for (i=0; i<p; i++)
{
for (j=0;j<q;j++)
{
printf(“%d\t”,b{i][j]);
}
printf(“\n”);
}
if (n!=p) 
{
printf( “can not multiply”);
}
else
{
for (i=0;i<x; i++)
{
for(j=0; j<q;j++)
{
sum=0;
for (k=0;k<x; k++)
{
sum= sum+(a[i][k]*b[k][j]);
}
c[i][j]=sum;
}}
printf(“ multiplication is :\n”);
for( i=0;i<x;i++)
{
for(j=0;j<q;j++)
{
printf(“%d\t”,c[i][j]);
}
}
