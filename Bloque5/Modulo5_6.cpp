#include <iostream>
using namespace std;

int main()
{

    char saludo[] = "HOLA";
    cout << saludo << endl;

    char saludo2[5] = {'H', 'o', 'l', 'a', '\0'};
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
    cout << "El nombre es:" << endl;
     int contador = 0 ;
     string nombre2;
    for (int i = 0; i < nombre.length(); i++)
    {
        cout << nombre[i];
        switch (nombre[i])

        {
        case 'a':
            contador = contador + 1;
            break;

        case 'e':
            contador = contador + 1;
            break;

        case 'i':
            contador = contador + 1;
            break;

        case 'o':
            contador = contador + 1;
            break;

        case 'u':
            contador = contador + 1;
            break;

        default:
            break;
        }

        if (nombre[i] == ' ')
        {
            nombre[i] = '-';
        }
        
       
    }
    cout << "este nombre contiene: " << contador << " vocales" << endl;

    cout << "el nombre modificado es " << nombre << endl;

    cout << endl;

    return 0;
}