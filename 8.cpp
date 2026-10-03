#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  /*const int a=35;
   cout<<"the value of a is "<<a;
   a=36;
    cout<<"the value of a is "<<a;
    return 0;*/

  // you  cannot change the value after writing "const"
  int x = 459, y = 74, z = 772457;
  cout << "the value of x is :" << setw(10) << x << endl;
  cout << "the value of y is :" << setw(10) << y << endl;
  cout << "the value of z is :" << setw(10) << z << endl;
}