12a. Creating to demonstrate function fread()/fscanf()
#include<stdio.h>
int main()
{
FILE*ptr=fopen("patel-txt","r");
if(ptr==NULL){
printf("no such file");
return0;
}
char buf[100];
while(fscanf(ptr,"%*s%*s%s",buf)!=EOF)
printf("%s\n", buf);
return0;
}
