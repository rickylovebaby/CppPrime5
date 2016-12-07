#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data.txt","r",stdin);
    #endif // LOCAL
    istream_iterator<string> in_iter(cin),eof;
    vector<string> vec(in_iter,eof);
    ostream_iterator<string> out(cout," ");
    for(auto s :vec)
        *out++ = s;
    cout << endl;
    return 0;

}
