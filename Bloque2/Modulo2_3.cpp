/* 
aritmetic operators
+ sum
- rest
* multiplication
/ division
% modulus

relational operators
> greater than
< less than
>= greater than or equal
<= less than or equal
== equal


Logical operators
&& and
|| or

*/
#include <iostream>
using namespace std;

int main ()
{
    int a = 10, b=20;
    cout << a+b << endl; // sum
    cout << (a>b) << endl; // less than
    cout << (a>b && b<11) << endl; // and
}
