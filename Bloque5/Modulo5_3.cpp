#include <iostream>
using namespace std;

int main()
{
    int numbers[10] = {};
    cout << "insert ten numbers" << endl;
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4] >> numbers[5] >> numbers[6] >> numbers[7] >> numbers[8] >> numbers[9];
    cout << "the numbers are: " << endl;
    for (int i = 0; i <= 9; i++)
    {
        cout << numbers[i] << endl;
    }
    cout << "the average of the values is: " << (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9]) / 10 << endl;

    if (numbers[0] >= numbers[1] && numbers[0] >= numbers[2] && numbers[0] >= numbers[3] && numbers[0] >= numbers[4] && numbers[0] >= numbers[5] && numbers[0] >= numbers[6] && numbers[0] >= numbers[7] && numbers[0] >= numbers[8] && numbers[0] >= numbers[9])
    {
      cout << "higest number is "  <<numbers[0];
    }
    else {
        cout << "another number is highest" << endl;
    }

    return 0;
}