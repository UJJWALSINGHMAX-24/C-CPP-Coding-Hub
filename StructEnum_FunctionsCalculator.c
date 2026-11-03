#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

struct Calculator
{
    double num1;
    double num2;
    double result;
    enum Operation op;
};

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed!\n");
        return 0;
    }
}

void calculate(struct Calculator *calc)
{
    switch (calc->op)
    {
    case ADD:
        calc->result = add(calc->num1, calc->num2);
        break;
    case SUBTRACT:
        calc->result = subtract(calc->num1, calc->num2);
        break;
    case MULTIPLY:
        calc->result = multiply(calc->num1, calc->num2);
        break;
    case DIVIDE:
        calc->result = divide(calc->num1, calc->num2);
        break;
    default:
        printf("Invalid Operation!\n");
        calc->result = 0;
    }
}

int main()
{
    struct Calculator myCalc;
    int choice;

    printf("=== Modular Calculator (Struct, Enum, Functions) ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    myCalc.op = (enum Operation)choice;

    if (myCalc.op < ADD || myCalc.op > DIVIDE)
    {
        printf("Aapne galat choice chun li hai!\n");
        return 1;
    }

    printf("Phla number daaliye: ");
    scanf("%lf", &myCalc.num1);

    printf("Dusra number daaliye: ");
    scanf("%lf", &myCalc.num2);

    calculate(&myCalc);

    printf("Result: %.2lf\n", myCalc.result);

    return 0;
}