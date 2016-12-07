#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(10);
    for(int i= 0;i< 10;++i)
    {
        vec.push_back(i);
    }
    cout <<vec.size() <<endl;
    vec[3]=vec[5]=vec[9] = 99;
    for(auto i : vec)
        cout << i << " ";
    cout << endl;

    remove(vec.begin(),vec.end(),99);
    cout << vec.size() << endl;

    for( auto j : vec)
        cout << j << " ";
    cout << endl;

    return 0;

}

