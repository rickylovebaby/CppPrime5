#include <iostream>
#include <utility>

#include <string>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data2.txt","r",stdin);
    #endif // LOCAL

    map<string,int> msi;
    string str;
    int val;
    while(cin >> str >> val)
        msi[str] = val;

    auto map_it = msi.begin();
    while(map_it != msi.end())
    {
        cout << map_it->first <<" "<<map_it->second<<"\n";

        ++map_it;
    }




    return 0;


}
