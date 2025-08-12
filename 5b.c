5b)	 C-Program to search an ordered list using binary search.
#include<stdio.h>
int main()
{
int  a[10],low,high,mid,i,n,key;
printf(“/n Enter the size of the array”);
scanf(“%d”,&n);
printf(“Enter the elements in ascending order”);
for(i=0;i<n;i++)
scanf(“%d”,&a[i] );
printf(“enter the elements”);
scanf(“%d”,&key);
low=0;
high=n-1;
mid=(low+high)/2;
while(low<high)
{
if(key= =a[mid])
break;
if(key>a[mid])
low=mid+1;
else
high=mid-1;
mid=(low+high)/2;
}
if(key= = a[mid])
printf(“enter element is found at%d”,mid+1);
else
printf(“the element is not present in the list”);
retrun 0;
}
