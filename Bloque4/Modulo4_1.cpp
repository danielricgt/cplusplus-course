#include <iostream>
using namespace std;

int main()
{
    // basic for cycle
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    // for with continue, number 1 to five excep 4 
  for (int i = 1; i <= 5; i++)
    {
        if(i== 4) continue;
        cout << i << endl;
    }

    cout << endl;

    // for with break
      for (int i = 1; i <= 5; i++)
    {
        if (i == 2) break;
        cout << i << endl;
    }

    cout << endl;


    cout << endl;


}