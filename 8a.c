8a) C program to check if the substring is present in the given string.
#include <string.h>
int main() {
    char str[100], substr[50];
    printf("Enter the main string: ");
    scanf("%s", str);
    printf("Enter the substring: ");
    scanf("%s", substr);

    // Check if the substring is present
    if (strstr(str, substr)) {
        printf("The substring is present in the given string .\n");
    } else {
        printf("The substring is not present in the given string.\n");
    }
    return 0;
}
