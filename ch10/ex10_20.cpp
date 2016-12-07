#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <functional>
using namespace std;
using namespace std::placeholders;
bool check_size(const string &s,string::size_type sz)
{
    return s.size() > sz;
}

int main()
{
    #ifndef local
    freopen("data.txt","r",stdin);

    #endif // local
    vector<string> svec;
    string str;
    while(cin >> str)
        svec.push_back(str);
    auto ci = count_if(svec.begin(),svec.end(),bind(check_size,_1,6));
    cout << "the number of elements which the size more than six: "
        << ci << endl;

    return 0;



}
