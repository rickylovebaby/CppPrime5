#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int x=0,y=0;
   int someValue = 1;

   someValue ? ++x,++y : --x, --y;

    cout << x << " " << y;
    cout << endl;
    x=0,y=0;
    someValue = 0;
    someValue ? ++x,++y : --x, --y;
    cout << x << " " << y;
    cout << endl;

}


