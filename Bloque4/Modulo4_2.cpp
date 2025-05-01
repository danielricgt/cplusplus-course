#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers please" << endl;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << endl;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is even" << endl;
        }
    }

    int y, z;
    cout << "Enter two numbers please" << endl;
    cout << "First number: ";
    cin >> y;
    cout << "Second number: ";
    cin >> z;
    cout << endl;


        for (int i = y; i <= z; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        else
        {
            cout << i << " is even" << endl;
        }
    }

    return 0;
}