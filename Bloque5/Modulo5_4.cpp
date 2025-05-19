#include <iostream>
using namespace std;

int main () {

int matrix[3][3] = {
    {2,3,4} , {2,3,2}, {1,2,1}
};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << matrix [i][j] << " ";
    }
    cout << endl;
    
}

matrix [1][2] = 100;

int suma = 0;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
      suma += matrix[i][j]; 
    }
    
}
cout << "the total sum is: " << suma << endl;


return 0;

}