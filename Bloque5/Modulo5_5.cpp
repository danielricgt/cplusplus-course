#include <iostream>
using namespace std;


int main () {


    int a,b,c,d,e,f,g,h,i;
    cout << "enter the matrix numbers" << endl;
    cin >> a ; 
    cout << endl;
    cin >> b ; 
    cout << endl;
    cin >> c ; 
    cout << endl;
    cin >> d ; 
    cout << endl;
    cin >> e ; 
    cout << endl;
    cin >> f ; 
    cout << endl;
    cin >> g ; 
    cout << endl;
    cin >> h ; 
    cout << endl;
    cin >> i ; 

    int matrix[3][3] = {{a,b,c},{d,e,f},{g,h,i}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<  matrix[i][j] <<  " ";
        }

        cout << endl;
        
       
    }

 


    return 0;
}