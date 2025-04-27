#include <iostream>
using namespace std;

int main()
{

    int mathOperationType;

    cout << "select the math operation you want to do: " << endl;
    cin >> mathOperationType;
    switch (mathOperationType)
    {
    case 1:
        int a, b;
        cout << "please enter the first number you wuant to sum" << endl;
        cin >> a;
        cout << "please enter the second number you want to sum" << endl;
        cin >> b;
        cout << "the result of the sum is: " << a + b << endl;

        break;
        default:
            cout << "not valid option" << endl;
            break;
    }

    return 0;
}