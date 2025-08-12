5a)	C-Program to calculate average of the number in an array.
#include<stdio.h>
int main( )
{
int a[10],n,i,sum=0;
float avg;
printf(“enter the size of array”);
scanf(“%d”,&n);
printf(enter the elements”);
for (i=0; i<n; i++)
scanf(“%d”,&a[i]);
for (i=0;i<n;i++)
sum=sum+a[i];
avg=(float)sum/n;
printf(“\n Sum=%d”,sum);
printf(“\n Avg=%f’,avg);
return 0;
}
