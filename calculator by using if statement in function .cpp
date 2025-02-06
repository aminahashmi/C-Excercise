
#include <iostream>
using namespace std;

float add(float num1, float num2) {
    return num1 + num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float mul(float num1, float num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed.";
        return 0;
    }
}

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    char op;
    cin >> op;

    if (op == '+') {
        cout << "Result: " << add(num1, num2);
    } else if (op == '-') {
        cout << "Result: " << sub(num1, num2);
    } else if (op == '*') {
        cout << "Result: " << mul(num1, num2);
    } else if (op == '/') {
        cout << "Result: " << div(num1, num2);
    } else {
        cout << "Error: Invalid operation.";
    }

    return 0;
}