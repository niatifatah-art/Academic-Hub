/*
Exercise 1: The "Identity Card" (Basics & Formatting)

Goal: Practice variable declaration and the use of escape sequences for clean layout.

    Create variables for your Name (string), Age (int), Grade (char), and GPA (float).

    Use printf to display them in a "Table" format using \t (tabs) and \n (newlines).

    Bonus: Try to print the GPA with only 2 decimal places using %.2f.
*/

#include <stdio.h>
int main() {
    char name[] = "Fatah";
    int age = 20;
    char grade = 'F';
    float gpa = 0;
    printf("Name:\t%s\nAge:\t%d\nGrade:\t%c\nGpa:\t%.2f\n", name, age, grade, gpa);
    return 0;
}

/* Exercise 2: The "Arithmetic Logic" (Data Manipulation)

Goal: Test if you understand how C handles different numeric types.

    Declare two integers, a = 10 and b = 3.

    Declare a float result.

    Calculate result = a / b; and print it.

    The Catch: If the output is 3.000000, you fell into the "Integer Division" trap! How do you make it show 3.333333? (Hint: Type casting or changing variable types). */
    
#include <stdio.h>
int main() {
    int a = 10;
    int b = 3;
    float result;
    result = (float)a / b;
    printf("The result is %.2f\n", result);
    return 0;
}

/* Exercise 3: The "Constant Challenge" (Best Practices)Goal: Use constants to simulate a real-world electronics calculation.Define a constant PI as 3.14159.Declare a variable for radius.Calculate the Circumference ($2 \times PI \times radius$) and Area ($PI \times radius^2$).Print both results with descriptive labels and a double quote sequence (\") around the word "Result". */
#include <stdio.h>
#define PI 3.14159
int main() {
    int radius = 4;
    float Circumference = 2 * PI * (float)radius;
    float Area = PI * (float)radius * (float)radius;
    printf("The \"Circumference\" is: \t%.2f\n", Circumference);
    printf("The \"Area\" is \t%.2f\n", Area);
    return 0;
}