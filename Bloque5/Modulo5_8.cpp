#include <iostream>
using namespace std;


    void duplicateElements( int *arr , int tam ){
        for (int i = 0; i < tam; i++)
        {
           arr[i] *= 2;
        }
        

    }

void showCarathers(const char* str);  // Declaración correcta

char name[] = "DANIEL";

int main () {

 int numbers[]= {1,2,3,4,5};
 duplicateElements(numbers, 5);

for (int i = 0; i < 5; i++)
{
    cout << numbers[i] << " " ;
}

cout << endl;
showCarathers(name);

return 0;

}

// we also can manipulate char chains with pointers

char* str = name;
void showCarathers ( const char* str ) {
    while (*str != '\0')
    {
        cout << *str << endl;
        str++;
    }
    
}