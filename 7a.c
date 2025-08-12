7a)	C-Program to read a number, find whether it is a palindrome or not.
#include<stdio.h>
int  main()
{
int n,r;
printf(“Enter a number:”);
scanf(“%d”,&n);
r=reverse (n);
if (r= =n){
 printf(“The num is palindrome”);
}else{
printf(“The number is not palindrome”);
return 0;
}
int  reverse (int n)
{
int rem,rev=0;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
retrun (rev);
}
