#include <iostream>
using namespace std;



  void arrayElements( int *arr , int tam ){
    int aux;
        for (int i = 0; i < tam -1 ; i++)
        {
           for (int j =0 ; j< tam - 1 -i ; j++)
           {
            if (arr[j]> arr[j+1])
            {
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= aux; 
            }
           }
           
        }
        

    }

int main () {
  int numbers[]= {3,2,4,9,5};


    cout <<  "Before initialization  " << endl;
for (int i = 0; i < 5; i++)
{
    cout << numbers[i] << " " << endl;
}

    cout <<  "After algorith ordering  "<< endl ;
    arrayElements(numbers, 5);

for (int i = 0; i < 5; i++)
{
    cout << numbers[i] << " " << endl;
}

    

    return 0;
}