#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    double result;

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b != 0) result = a / b;
            else {
                cout << "Error: division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Unknown operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
// Test fetch/pull/push workflow