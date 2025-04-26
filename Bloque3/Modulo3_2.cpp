#include <iostream>
using namespace std;

int main()
{

    // first we create the variable

    int option = 2;

    switch (option)
    {
    case 1:
        cout << "you have selected one" << endl;
        break;
    case 2:
        cout << "you have selected two" << endl;
        break;

    case 3:
        cout << "you have elected 2" << endl;
        break;
    default:
        cout << "not valid option" << endl;
    }
    char charOption = 'b';
    switch (charOption)
    {
    case 'a':
        cout << "youve selected a" << endl;
        break;
    case 'b':
        cout << "youve selected b" << endl;
        break;
    default:
        cout << "not valid character" << endl;
    }
    int day = 4;
    switch (day) {
        case 1: case 2: case 3: case 4: case 5:
         cout << "ita day into the week" << endl;
         break;

        case 6: case 7:

        cout << "its weekend"<< endl;
        break;
        default:
        cout << "thats not a day of the week" << endl;

    }

    return 0;
}