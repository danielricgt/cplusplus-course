#include <iostream>
using namespace std;


int main () {

    int numbers[3] = {};
    cout << numbers[0] << endl;
    numbers [2] = 33;

    int ages [3];
    ages[0]=1;
    ages[1]=23;
    ages[2]=18;

// print the values of the array numbers

    for(int i =0 ; i < 3; i++){
        cout << "the posistion " << i << "is: " << numbers[i] << endl;
    }

    char vocals [5] = {'a','e','i','o','u'};

    bool answers [3] = {true, false, false} ;

    return 0;
}