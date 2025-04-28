#include <iostream>
using namespace std;

int main()
{
    int mathOperationType;

    while (true) // Loop to keep the program running until the user chooses to exit
    {
        cout << "Select the math operation you want to do: " << endl;
        cout << "1. Sum" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Division" << endl;
        cout << "4. Multiplication" << endl;
        cout << "5. Not valid operation (example)" << endl;
        cout << "6. Exit" << endl;
        cin >> mathOperationType;

        switch (mathOperationType)
        {
        case 1: // Sum
        {
            int a, b;
            cout << "Please enter the first number you want to sum: " << endl;
            cin >> a;
            cout << "Please enter the second number you want to sum: " << endl;
            cin >> b;
            cout << "The result of the sum is: " << a + b << endl;
            break;
        }
        case 2: // Subtraction
        {
            int a, b;
            cout << "Please enter the first number: " << endl;
            cin >> a;
            cout << "Please enter the second number: " << endl;
            cin >> b;
            cout << "The result of the subtraction is: " << a - b << endl;
            break;
        }
        case 3: // Division
        {
            int a, b;
            cout << "Please enter the numerator: " << endl;
            cin >> a;
            cout << "Please enter the denominator: " << endl;
            cin >> b;
            if (b != 0)
            {
                cout << "The result of the division is: " << static_cast<double>(a) / b << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        }
        case 4: // Multiplication
        {
            int a, b;
            cout << "Please enter the first number: " << endl;
            cin >> a;
            cout << "Please enter the second number: " << endl;
            cin >> b;
            cout << "The result of the multiplication is: " << a * b << endl;
            break;
        }
        case 5: // Not valid operation (example)
        {
            cout << "This is an example of a not valid operation." << endl;
            break;
        }
        case 6: // Exit
        {
            cout << "Exiting the program. Goodbye!" << endl;
            return 0; // Ends the program
        }
        default: // Invalid option
            cout << "Not a valid option. Please try again." << endl;
            break;
        }
    }

    return 0;
}