#include <iostream>
using namespace std;

int main()
{

    int *ptr = new int;
    *ptr = 42;
    cout << *ptr << endl;
    delete ptr;

    int *arrays = new int[5];

    for (int i = 0; i < 5; i++)
    {
        arrays[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arrays[i] << " ";
    }

    delete[] arrays;

    cout << endl;

    // create a dynamic array
    int number;
    cout << "how elements the array will have" << endl;
    cin >> number;
    int *array2 = new int[number];
    for (int i = 0; i < number; i++)
    {
        array2[i] = i * 2;
    }

for (int i = 0; i < number; i++)
{
    cout << array2[i] << " " << endl;
}


    delete[] array2;

    return 0;
}