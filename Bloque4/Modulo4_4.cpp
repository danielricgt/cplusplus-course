#include <iostream>
using namespace std;

// function using parameters

int sum(int a, int b)
{

    return a + b;
}

// function using parameters and return value to do a average

float average(float a, float b, float c)
{
    return (a + b + c) / 3;
}

// function using parameters and return value to determine if a number is even

bool isEven(int a)
{
    return a % 2 == 0;
}

// function using parameters that returns a value to do a division and check if the second parameter is zero

float div (float a, float b){
    if(b == 0){
        cout << " You cannot divided by zero" <<endl;
        return -1;
    }
    else{
        return (a/b);
    }
}

// function using parameters that returns 

int greaterNumber (int a, int b, int c){
    if (a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main()
 
{

// calling the function sum
int resultado = sum(3, 4);
cout << "the result of the sum is:" << resultado << endl;

// calling the function average

float resultAverage = average(32.5 ,56.4,63.5);
cout << "the average is: " << resultAverage << endl;

// calling the function isEven

int n = 8;

if(isEven(n)){
    cout << n << " is an Even number" << endl;
}
else{
    cout << n << " is not an Even number" << endl;
}
// calling the function greaterNumber

int theMajor = greaterNumber(3,54,4);
cout << "thegrater nnumber is: " << theMajor << endl;

// calling the function div

float a = 13, b = 0;
cout << "the result of the div is" << div(a,b) << endl;

return 0;
}