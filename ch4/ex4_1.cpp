#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    while((i = get_value()) != 42 )
        cout << i << endl;
    return 0;
}
