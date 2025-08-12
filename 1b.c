1b. C program to convert temperature given in Celsius to Fahrenheit and Fahrenheit to Celsius

#include <stdio.h>
int main ()
{
    float f, C;
    printf("Enter temp in Fahrenheit:");
    scanf ("%f", &f);
    C = (f-32)* 5/9;
    printf("Temp is Celsius %.f:", C);
    printf("Enter temp in Celsius :");
    scanf("%f", &C);
    f = (C*9/5)+32;
    printf("Temp is Fahrenheit %f:", f);
    return 0;
}
