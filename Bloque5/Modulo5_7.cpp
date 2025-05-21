#include <iostream>
using namespace std;

int main()
{
    // pointers allows to access and manipulate directly positions in the memory
    int x = 10;
    int *p = &x;

    cout << *p << endl;

    *p = 25;
    cout << x << endl;

    // pointer in char
    char letter = 'a';
    char *letterP = &letter;
    cout << *letterP << endl;

    // pointers in array

    int numbs[] = {5, 10, 15};
    int *ptr2 = numbs;
    cout << *(ptr2 + 1) << endl;

    // 1. declare 2 int variables  and point to them with pointers print its values before and after

    int firstNumber = 33;
    int secondNumber = 42;

      cout << "original values are: " << endl;
    cout << firstNumber << " " << secondNumber << endl;

    int *pterFirstNum = &firstNumber;
    int *pterSecondNumber = &secondNumber;

    *pterFirstNum = 42;
    *pterSecondNumber = 33;

    cout << "the values changed are: " << endl;
    cout << firstNumber << " " << secondNumber << endl;
 

    return 0;
}
