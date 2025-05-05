#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
int division (int a, int b) {
    if (b == 0) {
        cout << "Division by zero is not allowed!" << endl;
        return 0; // Return 0 or handle the error appropriately
    }
    return (a / b);
}
int subs (int a, int b){return a - b;}
int mult(int a, int b ){return a*b;}

int main(){
int option, num1, num2;

    do {
        cout << "Calculator Select an option:" << endl;
        cout << "1. Sum" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cin >> option;

        if(option >= 1 && option <= 4){
            cout << "Enter two numbers: " << endl;
            cin >> num1 >> num2 ;
        }

        switch(option){
            case 1:
            cout << "The result is: " << sum(num1,num2) << endl;
            break;
        
            case 2: 
            cout << "the result is: " << subs(num1, num2) << endl;
            break;

            case 3:
            cout << "the result is: " << mult(num1, num2) << endl;
            break;

            case 4: 
            cout << "The result is: " << division(num1, num2) << endl;
            break;

            case 5:
            cout << "Exiting the calculator" << endl;
            break;

            default:
            cout << "Invalid option, please try again" << endl;
        }
    }
    while(option != 5 );
    return 0;
}
