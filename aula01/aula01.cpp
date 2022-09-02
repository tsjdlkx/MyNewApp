#include <iostream>
#include <string>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0;
    double y = 0;
    char oper = '+';
    double result = 0;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please type the operation: ";

    Calculator c;
    cin >> x >> oper >> y;
    if (oper == '/' && y == 0) {
        cout << "Division by 0 exception" << endl;
    }
    else {
        result = c.Calculate(x, oper, y);
        cout << "Result is: " << result << endl;
    }


    return 0;
}
