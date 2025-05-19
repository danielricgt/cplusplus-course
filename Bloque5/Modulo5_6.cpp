#include <iostream>
using namespace std;


int main () {

    char saludo [] = "HOLA";
    cout << saludo << endl;

    char saludo2 [5] = {'H','o','l','a','\0'};
    cout << saludo2 << endl;

    // concatenate char
    string nombre = "Yesika";
    nombre += " Padilla";
    cout << nombre << endl;
    cout << nombre.length() << endl;
    cout << nombre[1] << endl;

    if (nombre == "Yesika Padilla")
    {
        cout << "Nombre completo" << endl;
    }
    

    return 0;
}