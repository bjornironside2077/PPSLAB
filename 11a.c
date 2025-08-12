11a) C program to read employee details(name,salary,address) and print the same using structure.

#include <stdio.h>
// Define a structure for employee
struct Employee {
    char name[50];
    float salary;
    char address[100];
};

void main() {
    struct Employee emp;
    // Read employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("Enter employee address: ");
    scanf("%s", emp.address);
    
    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %s\n", emp.address);
}
