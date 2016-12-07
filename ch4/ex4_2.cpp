#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int var;
    vector<int> vec;
    #ifndef LOCAL
    freopen("data1.in","r",stdin);
    #endif
    while(cin >> var)
        vec.push_back(var);
    for(auto v : vec)
        cout << v << "  ";
    cout << endl;

    for(auto &v : vec)
    {
        if(v % 2) v *= 2;
        cout << v << "  ";
    }
    cout << endl;
    return 0;




}
