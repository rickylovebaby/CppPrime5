
#include <map>
#include <string>

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data2.txt","r",stdin);
    #endif // LOCAL
    map<string,size_t> word_count;
    string word;
    size_t val;
    while(cin >> word >> val)
    {
        auto ret = word_count.insert({word,val});
        if(!ret.second)
            ++ret.first->second;
    }
    for(const auto &w : word_count)
        cout << w.first << " "<< w.second<<" "
            <<((w.second > 1) ? "times" : "time")<<endl;


    return 0;

}
