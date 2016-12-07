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
    int val;
    while(cin >> val)
    {
        long int j = factorial(val);
        cout << val<<"! is " << j << endl;
    }
    return 0;

}
