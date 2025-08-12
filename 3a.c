3a. C program to read a test score, calculate the grade for the score and print the grade.

#include <stdio.h>

int main() {
    int score;
    char grade;

    //Prompt user to enter test score
    printf("Enter the test score (0-100): ");
    scanf("%d", &score);

    // Validate score range
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 1; // Exit program if the score is out of range
    }

    //Determine the grade based on score
    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // Display the grade
    printf("The grade for the score %d is: %c\n", score, grade);
    return 0;
}

Output:
Enter the test score (0-100): 85
The grade for the score 85 is: B

b. C program to use a menu to allow the user to add, multiple, substrate and divide two numbers using switch statement
#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // Corrected format specifier to %lf for double

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) { // Handle division by zero
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
