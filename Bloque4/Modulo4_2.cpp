#include <iostream>
using namespace std;

int main  () {
    int a,b;
    cout << "Enter two numbers please" << endl;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << endl;


    for(int i =a ; a <= b ; i++){
        if (i % 2 == 0){
            cout<< i << "is even" << endl;
        }
        else{
            
        }
    }

    return 0;
}