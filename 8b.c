8b) C program to demonstrate built-in string functions like strlen(),strcpy(),strcmp(),strcat().
#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50], str3[100];

    // Input two strings
    printf("Enter the first string str1: ");
    scanf("%s", str1);
    printf("Enter the second string str2: ");
    scanf("%s", str2);

    // Demonstrate strlen()
    printf("\nLength of str1: %zu", strlen(str1));
    printf("\nLength of str2: %zu", strlen(str2));

    // Demonstrate strcpy()
    strcpy(str3, str1);
    printf("\n\nCopying of str1 into str3: \"%s\"", str3);

    // Demonstrate strcat()
    strcat(str3, str2);
    printf("\n\nConcatenation of str1 and str2 into str3 : \"%s\"", str3);

    // Demonstrate strcmp()
    int comparison = strcmp(str1, str2);
   printf("\n\nComparison of str1 and str2:\n");
    if (comparison == 0) {
        printf("The strings str1 and str2 are equal.");
    } else if (comparison < 0) {
        printf("The string str1 is lexicographically smaller than str2.");
    } else {
        printf("The string str1 is lexicographically greater than str2.");
    }
    return 0;
}
