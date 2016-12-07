#include <iostream>
using namespace std;

int abs(int val)
{
    if(val < 0)
        return -val;
    else if(val > 0)
        return val;
    else
        return 0;
}
int main()
{
    int i;
    long long j;
    while(cin >> i)
    {
        j = abs(i);
        cout << i<< " abs is "<< j << endl;
    }
    return 0;

}
