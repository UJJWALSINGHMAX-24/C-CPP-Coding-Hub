#include <stdio.h>

int main()
{
    double num1, num2;
    int op;

    printf("--- 2D Array / Matrix Based Calculator (C) ---\n");
    printf("Enter 2 Numbers: ");
    scanf("%lf %lf", &num1, &num2);

    double results[4];
    results[0] = num1 + num2;
    results[1] = num1 - num2;
    results[2] = num1 * num2;
    results[3] = (num2 != 0) ? (num1 / num2) : 0;

    double table[1][4];
    for (int i = 0; i < 4; i++)
    {
        table[0][i] = results[i];
    }

    printf("\nSelect Operation (0: +, 1: -, 2: *, 3: /): ");
    scanf("%d", &op);

    if (op >= 0 && op <= 3)
    {
        printf("Result from 2D Matrix lookup: %.2lf\n", table[0][op]);
    }
    else
    {
        printf("Invalid Operation Index!\n");
    }

    return 0;
}