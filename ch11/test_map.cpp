#include <map>
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data1.txt","r",stdin);
    #endif // LOCAL
    map<string,size_t> word_count;
    string word;
    while(cin >> word)
        ++word_count[word];
    for(const auto &w : word_count)
        cout << w.first << " occurs "<< w.second
            <<"times"<<endl;;


    return 0;
}

