#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

  int Num1, Num2;
  int Result;
  char Operator;
  bool IsValid = true;

  printf("----- BASIC CALCULATOR -----\n");

  printf("Enter Your First Number : ");
  scanf("%d", &Num1);

  printf("Chose Your Operator [ + , -, * , / ] : ");
  scanf(" %c", &Operator);

  printf("Enter Your Second Number : ");
  scanf("%d", &Num2);

  switch (Operator)
  {
  case '+':
    Result = Num1 + Num2;

    break;

  case '-':
    Result = Num1 - Num2;

    break;

  case '*':
    Result = Num1 * Num2;

    break;

  case '/':

    if (Num2 != 0)
    {
      Result = Num1 / Num2;
    }
    else
    {
      printf("Error : Zero ( 0 ) Se Divide Nahi Kiya Ja Sakta.\n");
      IsValid = false;
    }

    break;

  default:
    printf("Error : Invalid Operator.\n");
    IsValid = false;
    break;
  }
  if (IsValid)
  {
    printf("OUTPUT : %d %c %d = %d\n", Num1, Operator, Num2, Result);
  }

  return 0;
}