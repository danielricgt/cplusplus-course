//  in this example we will declare int variables and print them

 #include <iostream>
 #include <string> // for use string variables
 using namespace std; // help to write less code

int main(){
    // int numeric types
    int age = 32; // int with signal
    unsigned int points = 100; // int without signal only positive numbers
    short days = 7; // short int
    long population = 1000000; // long int

    // decilmal numeric types
    float temperature = 36.6f; // float with lower precision
    double height = 1.75; // double with higher precision
    long double pi = 3.14159265358979323846; // long double with higher precision

    //  char and string types
    char initial= 'A'; // char with single character
    string name = "Daniel";
    // boolean types
    bool student = true; // boolean with true or false

    // show the values
    cout << "age is" << age << endl;
    cout << "Initial is" << initial << endl;
    cout << "name is: " << name << endl;
    cout << "points are" << points << endl;
    cout << "height is:" << height << endl;
    cout << "temperature is:" << temperature << endl;
    cout << "student is" << (student ? "yes": "no") << endl;
    cout << "population is" << population << endl;
    cout << "pi is" << pi << endl;
    cout << "days are" << days << endl;
    return 0; 


}   