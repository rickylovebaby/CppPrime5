
#include <iostream>
using namespace std;
template<typename T>
T abs(T i)
{
    return i>0 ? i : -i;
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
