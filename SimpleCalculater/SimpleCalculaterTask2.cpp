#include <iostream>
#include <limits>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Simple Calculator!" << endl;

    while (true) {

        cout << "Enter the first number: ";
        cin >> num1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        cout << "Enter the second number: ";
        cin >> num2;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        bool validOperation = false;
        while (!validOperation) {
            cout << "Choose an operation (+, -, *, /) \n";
            cout << "Addition Click : + " << endl;
            cout << "Subration Click : - " << endl;
            cout << "Multipilation Click : * " << endl;
            cout << "Division Click : / " << endl;
            cout << "Enter your choise : ";
            cin >> operation;

            switch (operation) {
                case '+':
                case '-':
                case '*':
                case '/':
                    validOperation = true;
                    break;
                default:
                    cout << "Error: Invalid operation! Please enter one of (+, -, *, /).\n";
                    break;
            }
        }

        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
        }

        break;
    }

    cout << "Thank you for using the calculator!" << endl;

    return 0;
}
