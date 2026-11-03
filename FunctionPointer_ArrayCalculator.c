#include <stdio.h>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

typedef double (*MathFunc)(double, double);

int main()
{
    MathFunc operations[] = {add, subtract, multiply, divide};

    double num1, num2;
    int choice;

    printf("--- Function Pointer Array Calculator (C) ---\n");
    printf("0. Add (+)\n1. Subtract (-)\n2. Multiply (*)\n3. Divide (/)\n");
    printf("Choose operation (0-3): ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 3)
    {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    double result = operations[choice](num1, num2);
    printf("Result: %.2lf\n", result);

    return 0;
}