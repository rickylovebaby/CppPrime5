#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::placeholders;

inline bool check_size(const string &s,string::size_type sz)
{
    return s.size() < sz;

}
inline vector<int>::const_iterator find_first_bigger(const vector<int> v,const string &s)
{
    return find_if(v.cbegin(),v.cend(),bind(check_size,s,_1));

}

int main()
{
    vector<int> v{1,6,3,8,5,6,7,8,9};
    string s("test");
    cout << *find_first_bigger(v,s) << endl;

    return 0;

}


