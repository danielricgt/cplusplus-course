#include <iostream>
using namespace std;

void increment(int &num)
{
    num++;
}

void changeSymbol(int &num)
{
    num = -num;
}

void changeValues(int &num1, int &num2)
{
    int tem = num1;
    int &ref1 = num1;
    ref1 = num2;

    int &ref2 = num2;
    ref2 = tem;
}

int main()
{

    int x = 20;
    int &ref = x;
    ref = 20;
    cout << x << endl;

    int y = 10;
    increment(y);
    cout << y << " incremented" << endl;

    int z = 20;
    changeSymbol(z);
    cout << z << " symbol changed!" << endl;

    int value1 = 23;
    int value2 = 90;
    changeValues(value1, value2);
    cout << value1 << " " << value2 << endl;
}
