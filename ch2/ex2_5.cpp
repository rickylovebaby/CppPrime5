#include <iostream>
using namespace std;

int main()
{
    int a=3,b=4;
    decltype(a) c=a;
    decltype((b)) d=a;
    ++c;
    ++d;
    cout << a << " "<< c <<" "<< d << endl;
    return 0;
}

