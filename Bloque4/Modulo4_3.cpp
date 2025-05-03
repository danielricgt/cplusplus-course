#include <iostream>
using namespace std;

// function  definition before main

void greeting()
{
    cout << "hey since the function" << endl;
}

//  function declaration before the main

void menuList() {
    cout << "Welcome to the menu" << endl;
    cout << "Meat" << endl;
    cout << "Chicken" << endl;
    cout << "Fish" << endl;
    cout << "Pig" << endl;
}

void printMessage();
void personalizedGreeting();
string getName();

int main()
{
    string userName = getName();
    cout << "Hello " << userName << endl;
    menuList();
    personalizedGreeting();
    return 0;
}

// function definition after main

void printMessage(){
    cout << "Hello  since  a function declared " << endl;
}

void personalizedGreeting(){
    string name;
    cout<< "Enter your name please" << endl;
    cin >> name;
    cout << "Hello " << name << endl;
}

string getName(){
    string name;
    cout << "please enter your name: " << endl;
    cin >> name;
    return name;
}