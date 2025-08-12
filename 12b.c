12b) Creating to demonstrate function fwrite() / fprintf()
#include<stdio.h>
int main()
{
    int i, n=2;
    char str[50];
    FILE*ptr=fopen("input.trt","r"); // Assuming "r" mode for fopen based on context
    if(fptr==NULL)
    {
        printf("could not open file");
        return 0;
    }
    for(i=0; i<n; i++)
        scanf("%[^\n]%s\n",i,str); // This line seems to have a syntax error, likely intended for file reading or string input
    }
    fclose (fptr);
    return 0;
}
