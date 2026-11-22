#include <iostream>
using namespace std;


enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };


struct Calculator {
    double num1;
    double num2;
    Operation op;
    double result;
};

bool calculate(Calculator &c) {
    switch (c.op) {
        case ADD:      c.result = c.num1 + c.num2; return true;
        case SUBTRACT: c.result = c.num1 - c.num2; return true;
        case MULTIPLY: c.result = c.num1 * c.num2; return true;
        case DIVIDE:
            if (c.num2 == 0) {
                cout << "Error: Cannot divide by zero!\n";
                return false;
            }
            c.result = c.num1 / c.num2;
            return true;
    }
    return false;
}

int main() {
    Calculator calc;
    int choice;

    cout << "Enter first number: ";
    cin >> calc.num1;
    cout << "Enter second number: ";
    cin >> calc.num2;

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Choose operation: ";
    cin >> choice;

    calc.op = static_cast<Operation>(choice);  

    if (choice >= 1 && choice <= 4 && calculate(calc)) {
        cout << "Result = " << calc.result << endl;
    } else if (choice < 1 || choice > 4) {
        cout << "Invalid choice!\n";
    }
    return 0;
}