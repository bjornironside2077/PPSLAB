7b) C-Program to read a number, find whether it is prime number or not.

#include<stdio.h>
int prime(int);
int main()
{
int num,p;
printf(“enter a number”)
scanf(“%d”,&num);
p=prime(num);
if(p==1)
printf(“\n the given number is prime number”);
else
printf(“\n the given number is not prime”);
}
int prime (int num)
{
int  i=2;
while (i<num)
{
if (num%i= =2)
return 0;
i++;
}
return 1;
}
