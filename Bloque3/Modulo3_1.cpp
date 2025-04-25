#include <iostream>
using namespace std;

int main()
{
    int age = 23;
    if (age >= 10)
    {
        cout << "you are an adult" << endl;
    }
    else
    {
        cout << "you are a child" << endl;
    }

int grade = 90;
if (grade >= 85){
    cout << "you have been approved" << endl;
}   
else if (grade >+ 70){
    cout << "you have approved with a low grade" << endl;
}
else{
    cout << "refused" << endl;
}

bool hasIdentityCard = true;
if (age >= 18 && hasIdentityCard){
cout << "you can access the bar" << endl;
}
else{
cout << "you cannot access the bar" << endl;
}
int hour = 14;
if (hour >= 6 && hour < 12){ //between 6 and 12 range
    cout << "good morning!" << endl;
}
else if(hour >= 12 && hour < 18){
cout << "good afternoon" << endl;
}
else{
    cout << "good night" << endl;
}

}