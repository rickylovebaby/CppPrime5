#include <iostream>
using namespace std;

int factorial(int val)
{
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;

}
int main()
{
    int j=factorial(5);
    cout << "5! is " << j << endl;
    return 0;

}
