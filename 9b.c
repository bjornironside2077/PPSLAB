9b) C program to read an array of elements, compute its sum using pointers.

#include <stdio.h>
int main() {
    int n, i, *ptr,arr[n],sum = 0;
    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer to the start of the array
    ptr = arr;

    // Compute the sum using the pointer
    for (i = 0; i < n; i++) {
        sum += *ptr; // Add the value pointed to by ptr
        ptr++;       // Move the pointer to the next element
    }
