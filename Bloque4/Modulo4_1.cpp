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
    if (i == 4)
      continue;
    cout << i << endl;
  }

  cout << endl;

  // for with break
  for (int i = 1; i <= 5; i++)
  {
    if (i == 2)
      break;
    cout << i << endl;
  }

  cout << endl;

  //  while cycle
  int j = 1;
  while (j <= 5)
  {
    cout << j << endl;
    j++;
  }

  cout << endl;

  //  while with break
  int k = 1;
  while (k <= 5)
  {
    if (k == 3)
      break;
    cout << k << endl;
    k++;
  }

  cout << endl;

  // do while
  int f = 1;
  do
  {
    cout << f << endl;
    f++;
  } while (f <= 5);
  cout << endl;

  // do while with break
  int y = 1;
  do
  {
    if (y == 2)
    {
      y++;
      continue;
    }
    cout << y << endl;
    y++;
  } while (y <= 4);
}